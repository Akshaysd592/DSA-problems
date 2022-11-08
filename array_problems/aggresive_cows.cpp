#include <bits/stdc++.h>
using namespace std;
int ispossible(vector <int> &arr,int k, int mid){
    int cowcount=1;
    int lastpos= arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastpos= arr[i];
        }
    }
    return false;
}

int aggresivecow(vector <int> &arr,int k){
    sort(arr.begin(),arr.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
    }
    int e= maxi;
    int ans=-1;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
    }
    }
    return ans;
}
int main(){
    int k=2;
    int arr[]={};
    return 0;
}