#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   char c='A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<c <<" ";
            j++;
        }
        cout<<endl;
        c++;
        i++;

    }
    return 0;
}