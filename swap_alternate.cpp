#include<bits/stdc++.h>

using namespace std;
void swap1(int arr[],int size){
  for(int i=0;i<size;i+=2){
    if(i+1==size){
        swap(arr[i],arr[i]);
    }
   else {
    swap(arr[i],arr[i+1]);
        }
}
}

int showdata(int arr[],int n){
    for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<endl;
 }
}

int main(){
    int n;
cout<<"Enter the size of element to be stored:"<<endl;
cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     swap1(arr,n);
     showdata(arr,n);
    return 0;
}