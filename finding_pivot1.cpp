#include <bits/stdc++.h>
using namespace std;
int findpivot(int arr[],int n){
    int pivot= arr[0];
    int i=0;
    while(i<n){
     if(arr[i]<pivot){
        pivot = arr[i];
     }
     i++;
    }
    return pivot;
    // conplexity will be o(n) beacause we are using linear search here
   
}
int main(){
    int n;
   
     int arr[10]= { 7,9,2,3,4};
     //finding pivot value as 1;
     cout<<"pivot element is "<<findpivot(arr,5);
    return 0;
}