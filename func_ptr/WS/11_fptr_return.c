#include <stdio.h>
#include <string.h>

typedef int (*GetOP)(int,int);  //typedef of a funcptr

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

GetOP getOperation(char *name)  //Cleaner version
{
    if (!strcmp(name,"add"))
    {
        return add;
    }

    if (!strcmp(name,"sub"))
    {
        return sub;
    }
    
}

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

    char op[] = "sub";

    int(*operation)(int,int);
    operation = getOperation(op);

    printf("%d\n",operation(10,5));
    
}