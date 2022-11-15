#include <bits/stdc++.h>
using namespace std;
bool checkprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the number to be checked "<<endl;
    cin>>n;
    if(checkprime(n)){
         cout<<"Is a prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
    return 0;

}