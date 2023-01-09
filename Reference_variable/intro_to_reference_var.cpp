#include <iostream>
using namespace std;
int& updating(int n){
    int num=n;
    int& value= num;
    return value;
}
int update(int &a){
   a = a+1;
    
    cout<<"inside the value of a is "<<a<<endl;
    // since call by value no changes in original function 
     // but in call by reference changes will be done on original variable since it is not creating new memory block ;
    return a;
}
int main(){
    // int i=5;
    // int &j= i;
    // i++; 
    // cout<<i<<endl ;
    // cout<<++j<<endl ;

    int n= 5;
    cout<<"Before "<< n <<endl;
    // call by value 
    update(n);
    cout<<"checking updating function "<<  updating(n)<<endl;
    cout<<"After "<< n<<endl;
   
    return 0;
}