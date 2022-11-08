#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n);
void show_arr(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5]={65,25,12,22,11};
    selection_sort(arr,5);
    show_arr(arr,5);
    return 0;
}

void selection_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int value=i;
        for(int j=i+1;j<n;j++){
            if(arr[value]>arr[j]){
                value=j;
            }
           
        }
        int temp = arr[i];
        arr[i]= arr[value];
        arr[value] =temp;
    }
}