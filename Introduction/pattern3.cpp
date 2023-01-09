#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;


  int i=1;

  while(i<=n){
    int s=n;
    int j=1;
    while(j<=n){
        cout<<s<<" ";
        s--;
        j++;
    }
    cout<<endl;
    i++;
    
  }

    return 0;
}