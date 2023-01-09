#include <iostream>
using namespace std;
int main(){

int a,b; 
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:" ;
cin>>b;

char ch;
cout<<"What operation do you want to operate : + or - or * or /: ";
cin>>ch;
switch(ch){
    case '+':
    cout<<"Addition of a and b is " << a+b<<endl;
    break;
    case '-':
    cout<<"subtraction of a and b is " << a-b<<endl;
    break;

    case '*':
    cout<<"multiplication  of a and b is " << a*b<<endl;
    break;
    case '/':
    cout<<"Division of a and b is " <<a/b<<endl;
    break;
    default:
    cout<<"Enter a valid operator "<<endl;
}



    return 0;
}