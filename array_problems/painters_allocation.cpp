#include <bits/stdc++.h>
using namespace std;
int possible_solution(int arr[],int n, int m, int mid){
    int sum=0;
    int paintercount=1;
    for(int i=0;i<n;i++){
    if(sum+arr[i]<=mid){
            sum = arr[i];

    }
    else{
        paintercount++;
        if(paintercount>m||arr[i]>mid){
            return false;
        }
        sum = arr[i];
    }
    }
    return true;
}
int painter_allocation(int arr1[],int n,int m){
    int s=0;
    int sum=0;
    int ans= -1;
    for(int i=0;i<n;i++){
        sum +=arr1[i];
    }
    int e=sum;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(possible_solution(arr1,n,m,mid)){
            ans= mid;
            e= mid-1;
        }
        else{
            s= mid+1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n=4,m=2;
    int arr[n]={5,5,5,5};
    cout<<"Time taken by painters is : "<< painter_allocation(arr,n,m)<<endl;
    return 0;
}