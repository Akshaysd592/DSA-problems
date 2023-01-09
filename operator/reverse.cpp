#include <iostream>
#include <math.h>
using namespace std;
int main(){

    // int n ;
    // cin>>n;
   
    // int value=0;
    // while(n!=0){
    //    int  result=n&1;
    //      value= (value*10)+result;
    //     n=n>>1;
    // }
    // cout<<"The same order of the number is "<<value<<endl;



    int n;
    cin>>n;
     int old=0;
     int i=0;
    while(n!=0){
        int result1=n&1;
        old=(result1*pow(10,i)+old);
        n=n>>1;
        i++;


    }
    cout<<old;
    return 0;

}