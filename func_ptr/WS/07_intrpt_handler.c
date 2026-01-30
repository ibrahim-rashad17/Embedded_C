#include <stdio.h>

void TimerISRCallBack(void)
{
    printf("Timer ISR over\n");
}

void KeyBoardIntrpt(void)
{
    printf("User defined keyboard intrpt callback");
}

void (*IntrptCallback[2])(void) = {TimerISRCallBack,KeyBoardIntrpt};

void main()
{
    int input;
    printf("User input:\t");
    scanf("%d",&input);

    if (input==0 || input==1)
    {
        IntrptCallback[input]();
    }
    
}