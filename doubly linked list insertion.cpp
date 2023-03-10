#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}; struct node *head, *temp, *newNode;

int length_of_list()
{
    temp = head;
    int len=0;
    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    return len;
}

void insert_at_beginning(int data)
{
    newNode = new node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insert_at_position(int data, int pos)
{
    newNode = new node();
    newNode->data = data;
    int len = length_of_list();
    if(pos > len)
        cout << "Invalid Position!" << endl;
    else
    {
        int current = 1;
        while(current < pos-1)
        {
            temp = temp -> next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void insert_at_end(int data)
{
    newNode = new node();
    newNode->data = data;
    while(temp != NULL)
    {
        temp = temp->next;
    }

    newNode->prev = temp;
    temp->next = newNode;
    newNode->next = NULL;
}

void display()
{
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    temp = head;
    insert_at_beginning(3);
    insert_at_beginning(2);
    insert_at_beginning(1);

    //insert_at_position(0,4);

    insert_at_end(5);
    insert_at_end(6);
    insert_at_end(7);

    display();
}
