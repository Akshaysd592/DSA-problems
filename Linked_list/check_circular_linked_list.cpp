#include <iostream>
#include <bits/stdc++.h>
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
        temp->next = temp;
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

bool checkloop(node *head)
{
    if (head == NULL)
    {
        return false;
    }
    node *temp = head;
    map<node *, bool> visited; // declaring map for key and value;
    while (head != NULL)
    {
        if (visited[temp] == true)
        {
            return true; // returning true means again checking same value so it's an loop
        }
        visited[temp] = true; // assigning true in map for each visit
    }
    return false;
}

// floyd's loop detection algorithm

node *floydloop(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *slow = head;
    node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

node *getstartingloop(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *intersection = floydloop(head);
     if(intersection == NULL){
        return NULL;
     }
    node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeloop(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *startlooping = getstartingloop(head);
    if(startlooping== NULL){
        return ;
    }
    node *temp = startlooping;

    while (temp->next != startlooping)
    {
        temp = temp->next;
    }
    temp->next = NULL;

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
    bool checkloopvalue = checkloop(head);
    if (checkloopvalue)
    {
        cout << "given LL having loop using map " << endl;
    }
    else
    {
        cout << "given LL having no loop" << endl;
    }
    
    if (floydloop(head) != NULL)
    {
        cout << "given LL having loop checked by floydloop" << endl;
    }
    else
    {
        cout << "given LL having no loop checked by floydloop" << endl;
    }
     
    cout << "looping starts from " << getstartingloop(head)->data << endl;
    


    
    cout<<"called function to remove looping"<<endl;
    removeloop(head);
    print(head);
    cout<<head->data<<endl;
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