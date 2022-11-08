#include <bits/stdc++.h>
using namespace std;

int find_occurence(int arr[],int n,int key){
    int start=0, end=n-1;
    int mid= start+ (end-start)/2;
    int result=-1;
    while(start<=end){
    if(arr[mid]==key){
        result=mid;
        end=mid-1;

    }
    else if( arr[mid]<key){
        start= mid+1;

    }
    else if ( arr[mid]>key){
        end = mid - 1;

    }
    mid = start+ (end - start )/2;
    }
    return result ;
}
int last_occurence(int arr[],int n,int key){
    int start=0, end=n-1;
    int mid= start+ (end-start)/2;
    int result=-1;
    while(start<=end){
    if(arr[mid]==key){
        result=mid;
        start = mid + 1;

    }
    else if( arr[mid]<key){
        start= mid+1;

    }
    else if ( arr[mid]>key){
        end = mid - 1;

    }
    mid = start+ (end - start )/2;
    }
    return result ;
}
int main(){
    int key ;
    cout<<" Enter the key to be find "<<endl;
    cin>> key;
    int even[5]={1,2,3,3,3};
    cout<<"first occurence of "<<key<<" is  "<< find_occurence(even,5,key)<<endl;
    cout<<"last occurence of "<<key<<" is  "<< last_occurence(even,5,key)<<endl;
    if((find_occurence(even,5,key)==-1 )&&(last_occurence(even,5,key)==-1)){
        cout<<"Element not found"<<endl;
    }
    return 0;
}