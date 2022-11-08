#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr1[],int n,int arr2[],int m, int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
          if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
          }
          else{
            arr3[k]= arr2[j];
            j++;
            k++;
          }
    }

    //agar second vala array khatam ho jaye to store karenge first vale array ki all values
    while(i<n){
        arr3[k]= arr1[i];
        i++;
        k++;
            }



    // nahi to second array ki value ko store kar denge
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }

    
}
void show_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    reversearray(arr1,5,arr2,3,arr3);
    show_array(arr3,8);
    return 0;
}