#include <iostream>
using namespace std;
int power(){
    int a,b;
    cin>>a>> b;
    int result=1;
    for(int i = 1;i<=b;i++){
        result = result* a;

    }

    return result;
}
int main(){

  cout<< " Result is : " <<  power();
    return 0;
}