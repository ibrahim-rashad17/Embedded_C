#include <stdio.h>
#include <stdint.h>
#include <string.h>

#pragma pack(1)
typedef struct {
    uint8_t  start;
    uint8_t  type;
    uint16_t length;
    uint8_t  payload[8]; 
    uint8_t  checksum;
}Packet_t;

uint8_t calculate_checksum(uint8_t *data, size_t len) {
    uint8_t sum = 0;
    for (size_t i = 0; i < len; i++) {
        sum ^= data[i];
    }
    return sum;
}

int main() {
    Packet_t pkt;

    pkt.start  = 0xAA;      // Start byte 
    pkt.type   = 0x01;      // Message type
    pkt.length = 8;         // Payload size

    for (int i = 0; i < 8; i++) {
        pkt.payload[i] = i + 1;  //Dummy data
    }

    //Calculate checksum over everything except checksum itself
    pkt.checksum = calculate_checksum((uint8_t*)&pkt, sizeof(Packet_t) - 1);

    uint8_t *raw_pkt = (uint8_t*)&pkt;

    //Lets assume printing is sending
    for (int i = 0; i < sizeof(Packet_t); i++)
    {
        printf("%02X ",raw_pkt[i]);
    }
    printf("\n");

    //Lets simulate reception
    Packet_t rx_packet;

    memcpy(&rx_packet,raw_pkt,sizeof(Packet_t));

    uint8_t rx_csum = calculate_checksum((uint8_t*)&rx_packet,sizeof(Packet_t)-1);

    if(rx_csum == rx_packet.checksum)
    {
        printf("Checksum macthed\r\n");
    }
    else
    {
        printf("Checksum not matched\r\n");
    }
    
    
}
