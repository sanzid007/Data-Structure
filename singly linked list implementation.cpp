#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
}; struct node *head,*one,*two,*three,*temp;

int main()
{
    // create new nodes
    one = new node();
    two = new node();
    three = new node();

    // insert node data
    one -> data = 1;
    two -> data = 2;
    three -> data = 3;

    // connecting the list
    head = one;
    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    // printing the list
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

}
