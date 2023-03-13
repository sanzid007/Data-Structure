#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int top = -1;
char stack[MAX];

int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if(top == MAX-1)
        return 1;
    else
        return 0;
}

void push(char c)
{
    top++;
    stack[top] = c;
}

char pop()
{
    char c;
    if(isEmpty())
        printf("Stack Underflow");
        exit(1);
    c = stack[top];
    top--;
    return c;
}

int parentheses_check(char b, char a)
{
        if((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'))
            return 1;
        else
            return 0;
}

int validity_check(char* s)
{
    int i;
    for(i = 0; i < strlen(s); i++)
    {
        if((s[i] == '(') || (s[i] == '{') || (s[i] == '['))
            push(s[i]);
        else
        {
            if((s[i] == ')') || (s[i] == '}') || (s[i] == ']'))
            {
                if(isEmpty())
                    return 0;
                else
                {
                    char temp;
                    temp = pop();
                    if(parentheses_check(s[i], temp))
                        continue;
                    else
                        return 0;
                }
            }
        }
    }

    if(isEmpty())
        return 1;
    else
        return 0;
}


int main()
{
    char expr[MAX];
    int valid;

    printf("Enter an expression to check validity: ");
    gets(expr);

    valid = validity_check(expr);
    if(valid)
        printf("The given expression is valid.");
    else
        printf("The given expression is not valid.");

    return 0;
}
