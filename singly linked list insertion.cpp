#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
}; struct node *head = NULL,*newNode,*temp;


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
    newNode->data  = data;
    newNode->next = head;
    head = newNode;
}

void insert_at_end(int data)
{
    newNode = new node();
    newNode->data = data;
    newNode->next = NULL;
    temp = head;

    // traverse to the end of the list

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insert_at_position(int data, int pos)
{
    newNode = new node();
    int length = length_of_list();
    if(length < pos)
        cout << "Invalid Position" << endl;
    else
    {
        newNode = new node();
        newNode->data = data;

        // traverse to the position
        temp = head;
        for(int current=1; current < pos-1; current++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
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
    insert_at_beginning(3);
    insert_at_beginning(2);
    insert_at_beginning(1);

    insert_at_end(5);
    insert_at_end(6);
    insert_at_end(7);

    insert_at_position(0,4);
    display();
}
