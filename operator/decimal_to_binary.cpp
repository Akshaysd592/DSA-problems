#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
int i =0;
int ans=1;
while(n!=0){
    int result=n&1;
    ans = (result * pow(10,i))+ans;
    n= n>>1;
    i++;
}
cout<<ans;


    return 0;
}