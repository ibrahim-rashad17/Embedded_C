#include <stdio.h>
#include <stdint.h>

#define DEMO_MODE 3

typedef struct 
{
    uint8_t mode :4;
    uint8_t ready_flg :1;
    uint8_t error_flg :1;
    uint8_t bsy_flg   :1;
}status_reg_t;

void main()
{
    status_reg_t sr = {0};

    //Toggling of flag
    sr.bsy_flg = !sr.bsy_flg;
    
    sr.mode = DEMO_MODE;
}