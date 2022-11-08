#include <bits/stdc++.h>
using namespace std;
void swap(int arr[],int n){
    int s= 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}


void show_data(int arr[],int  n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){

    int arr[5]={
        1,2,3,4,5
    };
    swap(arr,5);
    show_data(arr,5);
    return 0;
}