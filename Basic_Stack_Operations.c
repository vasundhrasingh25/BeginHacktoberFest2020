#include<stdio.h>
#include<stdlib.h>
#define maxsize 20


int top=-1,i,n,stack[maxsize],element;


void check()
{
	if(top == -1)
	{
		printf("Stack empty\n");
	}
	else
	{
		printf("Stack has elements \n");
	}
}

void push()
    {
    if(top==maxsize)
    {
    printf("stack overflow");

    }
    else
    {
    printf("Enter the element to  push it");
    scanf("%d",&element);
    stack[++top]=element;
    }
    }

int pop()
{
    if(top==-1)
        printf("\nstack underflow\n");

    else
    {
        element=stack[top];
        top--;
        return element;

    }

}



void display()
{
    for(i=top ; i >=0 ; i--)
        printf("%d\n\n\n",stack[i]);

}

int main()
{
    int ch,ele;
    while(1)
    {
        printf("choose the opeartion >>>>>>>\n");
        printf("0-Checkempty\n1-push\n2-pop\n3-display\n4-exit\n\n======================\n>");
        scanf("%d",&ch);

        switch(ch)
        {

        case 0 : check(); break;
        case 1 : push(); break;
        case 2 : ele=pop(); printf("the poped element is %d\n",ele); break;
        case 3 : display(); break;
        case 4 : exit(0); break;
        default : printf("invalid choice !");

        }




    }

}