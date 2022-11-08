#include <bits/stdc++.h>
using namespace std;
int pivotvalue(int arr[],int n){
    int start = 0;
    int end= n-1;
    int  mid= start+ (end -start)/2;
    while(start<end){
    if(arr[mid]>arr[0]){
        start= mid+1;

    }
    else{
         end = mid;
    }
    mid= start+ (end- start)/2;
    }
    return start;

}
 
int main(){
    int arr[6]={7,9,10,11,12,1};
   
    cout<<" The pivot element in given array is at index "<<  pivotvalue(arr,6) <<endl;
    cout<<"2. The pivot element in given array is at index "<< forpivotasgreat(arr,6) <<endl;
    return 0;
}