#include <iostream>
using namespace std;
int main(){

    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int space=n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //  int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int space=i-1;
    //     int s=i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j=1;\
    //     int value=n-i+1;
    //     while(j<=value){
    //         cout<<s;
    //         s++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //  int n;
    // cin>>n;
    // int i=1;
    // int value=1;
    // while(i<=n){
    //     int space=n-i;
        
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j=1;
       
    //     while(j<=i){
    //        cout<<value;
    //        value++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n){
        int space=n-i;
        
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        
        while(j<=i){
            
           cout<<j;
         
            j++;
        }
        int k=i-1;
        while(k){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}