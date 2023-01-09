#include<bits/stdc++.h>
using namespace std;
int printsum(int *arr,int n);
void print(int *p){
    cout<<*p<<endl;
}


void update (int *pt){
    // pt= pt+1;
    // cout<<"inside the function"<<pt<<endl;
    *pt = *pt +1;
    cout<<"inside "<<*pt<<endl;
}
int main(){


// int arr[5]={1,2,3,4,5};
// char ch[6]="abcde";
// cout<<arr<<endl;
// cout<<ch<<endl;

// char *c = &ch[0];
// cout<<c <<endl;

// passing pointer in function 
// int n= 5;
// int *ptr = &n;
// print(ptr);
// cout<<"before  "<<ptr<<endl;
// update(ptr);
// cout<<"after "<<*ptr<<endl;


int arr[5]={1,2,3,4,5};
cout<<printsum(arr+2,3);
    return 0;
}    
int printsum(int *arr,int n){
    cout<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum+i[arr];
    }
    return sum;
}