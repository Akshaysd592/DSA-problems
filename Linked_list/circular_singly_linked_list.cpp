#include <bits/stdc++.h>
using namespace std;

// In doubly linked list there is no need of head only using tail while working
// no use of head
class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "value deleted is " << value << endl;
    }
};

void insertnode(node *&tail, int element, int v)
{

    // same code for every node because we are using circular singly linkedlist means apply same methods

    if (tail == NULL)
    {
        // for empty circular singly linked list;
        node *temp = new node(v);
        temp->next = temp;
        tail = temp;
    }
    else
    {
        // for having already some value in  circular singly linkedlist
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found  after which node to be putted
        node *temp = new node(v);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(node *&tail)
{  
      if(tail==NULL){
        cout<<" list is empty"<<endl;
        return ;
      }
    node *iter = tail;
    do
    {
        cout << iter->data << " ";
        iter = iter->next;

    } while (iter != tail);
    cout << endl;
}

void deletenode(node *&tail, int element)
{

    if (tail == NULL)
    {
        cout << "List is Empty" << endl;
    }

    else
    {
        // node *curr = tail;
        // node *prev = NULL;
        node *prev = tail;
        node *curr = prev->next;
        int valuefound = 1;
        if (curr == prev)
        { // handling only single node  tail should not be deleted
            tail = NULL;
        }
        while (curr->data != element)
        {
            if (curr == tail)
            {
                cout << "value "<<element<<" not  found"<<endl;
                valuefound = 0;
                break;
            }
            prev = curr;
            curr = curr->next;
        }

        if (tail == curr)
        {
            // handling list having node to be deleted pointing tail
            tail = prev;
        }
        if (valuefound)
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
}

int main()
{

    node *tail = NULL;
    insertnode(tail, 7, 5);
    insertnode(tail, 5, 9);
    insertnode(tail, 9, 10);
    insertnode(tail, 5, 34);
    print(tail);
    deletenode(tail, 5);
    print(tail);
    deletenode(tail, 55);
    print(tail);

    return 0;
}