#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
       int j=1;
       int var1= n-i+1;
       while(j<=var1){
        cout<<j;
        j++;
       }

     int k= i-1;
       while(k){
        cout<<"*";
        k--;
       }

       int l=i-1;
       while(l){
        cout<<"*";
        l--;
       }

       int m=1;
       int o=n-i+1;
        int z=n-i+1;
       while(m<=o){
       
        cout<<z;
        z--;
        m++;
       }
 
       cout <<endl;
       i++;




    }


    return 0;
}