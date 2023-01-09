#include <iostream>
using namespace std;
bool evenorodd(int a ){
    if (a%2==0){
        return 1;
    }
    return 0;
}
int main(){
    int num;
    cin>>num;
    if (evenorodd(num)){
        cout<<"The entered value is even "<<endl;

    }
    else{
        cout<<"The entered value is odd";
    }
    return 0;
}