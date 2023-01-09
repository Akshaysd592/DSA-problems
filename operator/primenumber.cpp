#include <iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the number:"<<endl;
    // cin>>n;
    // int isprime= 1;
    // for(int i=2; i<n;i++){
    //     if(n%i==0){
    //         isprime =0;
    //         break;
    //     }
       

    // }
    // if(isprime==0){
    //     cout<<"Given number is not a prime number";
    // }
    // else{
    // cout<<"Inputed value "<< n<<" is a  prime number"<<endl;
    // }
    for(int i=0;i<=5;i+=1){
        for(int j=0;j<=5;j++){
            if(i+j ==10){
              break;
            }
            cout<<i<<" "<<j<<endl;
        }
       
    }
    return 0;
}