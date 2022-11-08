#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int var= arr[i];
        int j=i;
        for(;j>0;j--){
            if(arr[j-1]>var){
                arr[j]= arr[j-1];
            }
            else{
                break;
            }

        }
        arr[j]= var;
    }
}

void show_data(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}
int main(){

   int arr[5]={10,1,7,4,5};
   insertion_sort(arr,5);
   show_data(arr,5);

    return 0;
}