#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct node node;

struct node
{
    int data;
    node *link;
};

node *head = NULL;

void print(node *head)
{
    while (head != NULL)
    {
        printf("%d\t",head->data);
        head = head->link;
    }
}

void insertnode(int n)
{
    node *temp = head;

    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = n;
    new_node->link = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }
    

    while (temp->link != NULL)
    { 
        temp = temp->link;
    }
    temp->link = new_node;  
    
}

int main()
{
    insertnode(10);
    print(head);
    printf("\n");
    insertnode(15);
    print(head);
    return 0;
}
