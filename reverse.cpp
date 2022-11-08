#include <iostream>
using namespace std;
int reverse(int arr[],int size){
  int start=0;
  int end=size-1;
  while(start<=end){
     swap(arr[start],arr[end]);
     start++;
     end--;

  }
}
int printarr(int arr1[],int size){
    for(int i=0;i<size;i++){
      cout<<arr1[i]<<" ";
    }
  cout<<endl;
}
int main(){
    int arr[6]={2,3,4,1,5,6};
    int brr[5]{4,5,7,3,2};
    reverse(arr,6);
    reverse(brr,5);
    printarr(arr,6);
    printarr(brr,5);

    return 0;
}