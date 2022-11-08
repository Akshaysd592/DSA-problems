#include <iostream>
using namespace std;


int swap_alternate (int arr[],int size){
   for(int i=0;i<size;i+=2){
    if(i+1<size){
       int temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
    }
   }
   cout<<endl;
}


int showdata(int arr[],int size)
  {

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
int main(){
    int even[8]=  {4,3,2,2,5,6,4,8};
    int odd[7]= {7,6,3,2,4,8,3};
    swap_alternate(even,8);
    swap_alternate(odd,7);
    showdata(even,8);
    showdata(odd,7);
    
 return 0;
}