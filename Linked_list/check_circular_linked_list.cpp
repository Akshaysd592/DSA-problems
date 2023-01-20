#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int a)
    {
        this->data = a;
        this->next = NULL;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void headinsert(node *&head, int value)
{
    if (head == NULL)
    {
        node *temp = new node(value);
       temp ->next = temp;
        head = temp;

        return;
    }

    node *temp = new node(value);
    temp->next = head;
    head->next = temp;
    head = temp;
}

bool checkcircular(node *&head)
{
    if (head == NULL)
    {
        return true; // checking for empty linkedlist
    }


    node *temp = head->next;
    while (temp != NULL && temp != head)
    {  
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    node *head = NULL;
    headinsert(head, 2);
    headinsert(head, 5);
    headinsert(head, 6);
    headinsert(head, 8);
    headinsert(head, 10);
    // print(head);

    bool check = checkcircular(head);
    if (check)
    {
        cout << "linked list is circular " << endl;
    }

    else
    {
        cout << "linked list is not circular list" << endl;
    }

    return 0;
}