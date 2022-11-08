#include <iostream>
#include <math.h>
using namespace std;
int getmax(int arr[],int size){
    int max1= INT32_MIN;
    
    for(int i=0;i<size;i++){
       max1= max(max1,arr[i]);
    }
    return max1;


}
int getmin(int arr[],int size){
    int min=INT32_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int num[10];
    for(int i=0;i<size;i++){
        cin>>num[i];
     
    }

     cout<<"maximum value is "<<getmax(num,size)<<endl;
     cout<<"minimum value is "<<getmin(num,size)<<endl;

    return 0;
}