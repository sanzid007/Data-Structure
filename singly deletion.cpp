#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
}; struct node *head,*newNode,*temp;

void create_list()
{
    // creating 9 nodes
    for(int i=9; i >= 1; i--)
    {
        newNode = new node();
        newNode->data  = i;
        newNode->next = head;
        head = newNode;
    }
}

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

void delete_from_beginning()
{
    head = head->next;
}

void delete_from_end()
{
    // Traverse to the end
    temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = NULL;
}

void delete_from_position(int pos)
{
    // traverse to the position
    temp = head;
    for(int current=1; current < pos-1; current++)
    {
        if(temp->next!=NULL)
        {
            temp = temp->next;
        }
    }

    temp->next = temp->next->next;
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
    create_list();
    if(head == NULL)
        cout << "The list is empty!" << endl;
    else
    {
        delete_from_beginning();
        delete_from_position(4);
        delete_from_end();
        display();
    }
}
