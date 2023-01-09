#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n = 5;
    // cout<<n<<endl;
    // cout<<&n<<endl;
    // int *p= &n;
    // cout<<p<<endl;
    // // showing address of pointer p 
    // cout<<&p<<endl;
    // cout<<*p<<endl;

    // // using pointer to pointer
    // int **Q=&p;
    // cout<<Q<<endl;
    // cout<<&Q<<endl;
    // cout<<*Q<<endl;
    // cout<<**Q<<endl;




//     int n=5;
//     cout<<n<<endl;
//     cout<<&n<<endl;


//     int *ptr = 0;
//     ptr= &n;
//     cout<<ptr<<endl;
//     cout<<&ptr<<endl;
//     cout<<*ptr<<endl;



//     int *pt = &n;
//     cout<<pt<<endl;
//     cout<<&pt<<endl;
//     cout<<*pt<<endl;


//     *pt = *pt +4;
//     cout<<*pt<<endl;
//     cout<<n<<endl;
//     cout<<"value of pt before increment "<<pt <<endl;
//      cout<<n<<endl;
    
//     cout<<"\t"<<endl;
//     cout<<"value of pt after increment "<<pt<<endl;
//     cout<<n<<endl;
//    (*pt)++;
//     cout<<*pt<<endl;



    double a= 78999;
    double *ab= &a;
    cout<<"address of a is => "<<&a<<endl;
    cout<<"address of a stored in a is "<<ab<<endl;
    cout<<"value of address stored in ab of a is "<<*ab<<endl;
    cout<<"address of ab is "<<&ab<<endl;
    (ab)++;
    cout<<a<<endl;
    cout<<(ab)<<endl;
    cout<<&ab<<endl;


    return 0;
}