#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int s=i;
        int j=1;
        while(j<=i){

            
            cout<<s;
            s--;
            j++;

        }
        cout<<endl;
        i++;
    }

    return 0;
}