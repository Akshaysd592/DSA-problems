#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[6]={
        0,1,0,3,12,0
    };

    int i=0;
    for(int j=0;j<6;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
                i++;
            
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}