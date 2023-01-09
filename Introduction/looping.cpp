#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  int sum=0;
  while(i<=n){
    cout<<i<<endl;
    if(i%2==0){
        sum+=i;
    }
    
    i++;
    
  }
  cout<<sum<<endl;

    return 0;
}