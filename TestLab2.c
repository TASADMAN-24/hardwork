#include<stdio.h>
#include<ctype.h>


char pop();
void push(char x);
int priority(char x);

char stack[100];
int top = -1;

int main(){


    char data[100];
    char *p, x;

    printf("Please insert data infix: ");
    scanf("%s",&data);
    printf("\n");

    p = data;

    while (*p != 0)
        {
        if (isalnum(*p))
            printf("%c",*p);
        else if (*p == '(')
            push(*p);
        else if (*p == ')')
        {
            while((x = pop()) != '(')
                printf("%c",x);
        }
        else

        {
          while (priority(stack[top]) >=  priority(*p))
                printf("%c",pop());
                push(*p);
        }
        p++;
    }
    while (top != -1)
    {
        printf("%c",pop());
    }return 0;

}

void push (char x)
{

    stack[++top] = x;
}

char pop()
{

    if(top == -1)
        return -1;
    else
    return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+'|| x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if(x == '^')
        return 3;
    return 0;
}
