#include <iostream>
using namespace std;

int printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
char printchar( char charac[],int size){
    for(int i=0;i<size;i++)
{
    cout<<charac[i]<<endl;
}}
int main()
{


    int arr[10];
    printarr(arr,10);
    
   int second[14]={3,4,5};
   printarr(second,14);
  


   int third[14]={1};
   printarr(third,14);
   int size= sizeof(third)/sizeof(int);
   cout<<size<<endl;


   char a[5]={'a','k','s','h','a'};
   
   printchar(a,5);
   
    return 0;
}