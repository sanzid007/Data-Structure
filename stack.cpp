#include<iostream>
#include<array>
#define MAX 5
using namespace std;

int stack_arr[MAX];
int top = -1;


bool isFull()
{
    int len = stack_arr.size();
    if(top == len-1)
        return true;
    else
        false;
}

bool isEmpty()
{
    int len = stack_arr.size();
    if(top == -1)
        return true;
    else
        false;
}

void push(int value)
{
    if(isFull())
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    else
    {
        top = top++;
        stack_arr[top] = value;
    }
}

int pop()
{
    if(isEmpty())
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    else
    {
        int value = stack_arr[top];
        top = top--;
        return value;
    }
}

/*int search_position(int value)
{

}
*/
void display_stack()
{
    for(int i=0; i <= top; i++)
        cout << stack_arr[i] << endl;
}


int main()
{
    push(5);
    push(8);
    push(7);
    push(3);
    pop();

    /* SEARCH FOR THE VALUE 7 IN THE STACK AND RETURN ITS POSITION IF EXISTS */
    //search_position(7);

    pop();
    push(9);
}
