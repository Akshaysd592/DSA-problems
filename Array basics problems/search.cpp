#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={2,3,4,5,2,44,5,2};
    int target;
    cout<<"Enter the target you want to find"<<endl;
    cin>>target;
    for(int i=0;i<8;i++){
        if(arr[i]==target){
           cout<<"The targeted array index is "<< i<<endl;
            break;
        }
    }
    return 0;
}