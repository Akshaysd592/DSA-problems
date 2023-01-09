#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // declaring constructor for initial node
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    
    ~node(){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            this->next = NULL;

        }
        cout<<endl<<"memory is free node with data "<< value <<endl;
    }

};

void insertAtHead(node *&head, int d)
{
    // new node created ;

    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(node *&head,node* &tail, int position, int d)
{
    if (position == 1)// inserting at first position 
    {
        insertAtHead(head, d);
        return;
    }

    

    node *temp = head;
    int count = 1;
    while (count < (position - 1))
    {
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        
        insertAtTail(tail,d);
        return;
    }

    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
// here using node* &head so that we can work on original head not creating new space
void print(node *&head)
{
    node *temp = head; // creating temp as a new temporary pointer pointing head
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        // pointing to the next in the node which is pointing to the next node address
    }
}




// deletion of node in linked list 

void deletenodeatposition(int position, node* &head , node* &tail){

    // deleting starting node 
    if(position== 1){
        node* temp  = head;// for deleting this node 
        head = head->next;// for moving head forward 
        temp ->next  = NULL;
        delete  temp;    
    }
    else{
        int count= 1;
        // deleting any node in between including last node as well
       node* curr= head;
       node* prev = NULL;
       while(count<position){
          prev = curr;
          curr = curr->next;
          count++;
       }
       if(curr->next==NULL){
         tail = prev;
       }
       
       prev->next = curr ->next;
       curr ->next = NULL; //curr->next pointing address should be given NULL
       delete curr;

    }
  


}

int main()
{
    node *node1 = new node(4); // Creating only one node initially
    // cout << node1->data << endl;
    // cout << (*node1).data << endl;
    // cout << node1->next << endl;

    // head pointing to the node1
    node *head = node1;
    node *tail = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtTail(tail, 5);
    insertAtPosition(head,tail, 3, 35);
    insertAtPosition(head, tail,1, 34);
    insertAtPosition(head, tail,7, 37);
    print(head);
    deletenodeatposition(1,head,tail);
    print(head);
    cout<<endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    // insertAtHead(10);
}