#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};  struct node *head, *temp, *newNode;


int main()
{
    /* Initialize nodes */
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    /* Allocate memory */
    one = new node();
    two = new node();
    three = new node();

    /* Assign data values */
    one->data = 1;
    two->data = 2;
    three->data = 3;

    /* Connect nodes */
    one->next = two;
    one->prev = NULL;

    two->next = three;
    two->prev = one;

    three->next = NULL;
    three->prev = two;

    /* Save address of first node in head */
    head = one;


    /* printing the list */
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
