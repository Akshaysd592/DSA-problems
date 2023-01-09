#include <iostream>
using namespace std;


 int factorial ( int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans= ans*i;
    }
    return ans;
 }
 int ncr(int n, int r){
    int num=factorial(n);
    int deno= factorial(r)* factorial(n-r);
    int ncr= num/deno;
    return ncr;
 }



int main(){

  int n,r;
  cin>>n>>r;
  cout<<"The nCr of "<<n <<" and "<< r <<" is : "<< ncr(n,r)<<endl;



    return 0;
}