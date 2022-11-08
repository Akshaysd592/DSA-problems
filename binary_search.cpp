#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int key){
     int start=0;
    int end=n-1;
    while(start<=end){
        int mid= start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;

        }

    }
    return -1;
}
int main(){


    int even[10]={2,3,4,5,6,7};
    int odd[10]={3,4,5,6,7};
   int key_value;
   cin>>key_value;
   int even_search= binary_search(even,6,key_value);
   cout<<"The in even array is at index "<<even_search<<endl;
   int odd_search= binary_search(odd,6,key_value);
   cout<<"The in even array is at index "<<odd_search<<endl;
        return 0;
}