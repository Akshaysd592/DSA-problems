#include <iostream>
using namespace std;

class node {
    public :
    int data;
    node* next ;

// declaring constructor for initial node
   node(int data){
       this ->data = data;
       this->next = NULL;
   }


};

int main(){
    node* a = new node(4);  //Creating only one node initially
    cout<<a->data <<endl;
    cout<<(*a).data<<endl;
    cout<<a->next<<endl;
}