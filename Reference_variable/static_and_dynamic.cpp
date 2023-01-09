#include <iostream>
using namespace std;
int sum(int *p,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+= p[i];
    }
    return sum;
}
int main(){
//    dynamic memory allocation 
int n;
cin>>n;
int *ptr = new int[5];
for(int i=0;i<n;i++){
    cin >> ptr[i];
}
 int sum_of_array = sum(ptr,n);
cout<<"sum of array is "<< sum_of_array<<endl;


    return 0;
}