#include <iostream>
using namespace std;
bool linear(int arr1[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr1[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){

    int arr[10]={3,4,1,8,-3,-2,19,43,12,32 };
    int key;
    cout<<"Enter the key to be search: "<<endl;
    cin>>key;
    bool value= linear(arr,10,key);
    if(value){
        cout<<"The provided key is present"<<endl;
    }
    else{
        cout<<"The provided key is absent "<<endl;
    }
    return 0;
}