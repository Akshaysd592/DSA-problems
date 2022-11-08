#include <iostream>
using namespace std;
int sumofarr(int arr[],int size){
    int sum =0;
    for(int i=0;i<size;i++){
        sum= sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The sum of all value inside the array is "<< sumofarr(arr, n);
    return 0;
    
}