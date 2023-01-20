#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    // constructor
    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }


    ~node(){
        int value = this->data;
        if(this->next !=NULL && this->prev !=NULL){
            this->next= NULL;
            this->prev = NULL;
            delete next;
            delete prev;
          
            
        }
        cout<<"value deleted is "<<value<<" \n"<<endl;
    }
};

// printing value
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

// giving length
void getlength(node *&head)
{
    int length = 0;
    node *temp = head;
    while (temp != NULL)
    {

        length++;
        temp = temp->next;
    }
    cout << endl;
    cout << length << endl;
}

void insertAtHead(node *&tail, node *&head, int v)
{
    if (head == NULL)
    {
        node *temp = new node(v);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(v);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(node *&tail, node *&head, int v)
{
    if (tail == NULL)
    {
        node *temp = new node(v);
        tail = temp;
        head = temp;
    }
    else
    {
        node *temp = new node(v);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(node *&tail, node *&head, int position, int v)
{
    if (position == 1)
    {
        insertAtHead(tail, head, v);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count < (position - 1))
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, head, v);
        return;
    }

    node *nodetoinsert = new node(v);
    nodetoinsert->next = temp->next;
    nodetoinsert->prev = temp;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
}

void deletionOfnode(node *&tail, node *&head, int position)
{
    if (position == 1)
    { // for first position

        node *temp = head;
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;

        delete temp;
    }
    else
    {
        node *current = head;
        node *earlier = NULL;

        int count = 1;
        while (count < position)
        {
            current = current->next;
            earlier = current->prev;
            count++;
        }

        earlier->next = current->next;
        if (current->next == NULL)
        {
            current->prev = NULL;
            delete current;
            tail = earlier;
        }
        else
        {
            current->next->prev = earlier;
            current->prev = NULL;
            current->next = NULL;
            
            delete current;
        }
    }
}

int main()
{
    // node *node1 = new node(5);

    node *head = NULL;
    node *tail = NULL;

    cout << endl;
    //  cout << "head pointing to " << head->data << endl;
    // cout << "tail pointing to " << tail->data << endl;

    // getlength(head);

    insertAtHead(tail, head, 6);

    insertAtHead(tail, head, 8);
    insertAtHead(tail, head, 2);
    insertAtHead(tail, head, 1);
    insertAtTail(tail, head, 4);

    insertAtPosition(tail, head, 1, 36);

    insertAtPosition(tail, head, 4, 35);
    insertAtPosition(tail, head, 4, 34);
    insertAtHead(tail, head, 39);

    print(head);
    cout << endl;
    cout << "head pointing to " << head->data << endl;
    
    cout << "tail pointing to " << tail->data << endl;
    getlength(head);

    deletionOfnode(tail, head, 1);
    print(head);
    deletionOfnode(tail, head, 8);
    print(head);
    deletionOfnode(tail, head, 4);print(head);
    

    print(head);
     
    cout<<"\n head pointing to "<< head->data<<endl;
    cout<<"Tail pointing to "<< tail ->data<<endl;
    return 0;
}