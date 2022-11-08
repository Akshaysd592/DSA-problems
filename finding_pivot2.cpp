#include <bits/stdc++.h>
using namespace std;
int pivot(int pivotarr[], int n){
    int start=0;
    int end=n-1;
    int mid= start+ (end -start)/2;
    while(start<end){
        if(pivotarr[mid]>pivotarr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start )/2;
    }
    return pivotarr[start];
}
int main(){
    int arr[20]={10,11,2,3,4,5};
    // here pivot is 2 so function should return 2 as a pivot value using binary search for complexity of o( logn)
    cout<<pivot(arr,6);
    
    return 0;
}