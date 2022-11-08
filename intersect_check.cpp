#include <bits/stdc++.h>
using namespace std;
int  intersect(int arr[],int arr1[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[i]==arr1[j]){
                cout<<arr[i]<<endl;
                arr[j]=INT32_MIN;
                break;
            }
        }
    }
    return 0;
}

int main(){

    int arr[10]={1,2,3,4,5};
    int arr1[10]={3,4};
    intersect(arr,arr1,5);
    return 0;
}