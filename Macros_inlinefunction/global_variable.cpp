#include <iostream>
using namespace std;
int score = 15;
 // global variables which can be used thoughout the program 
// void a(){
//     cout<<score<<" inside the function a "<<endl;
// }
 inline int  fun(int a, int b ){
  return    (a>b)?a:b;
}

int main(){
//   cout<<score <<" inside the main function "<<endl;
//   score++;
//    a();


int a= 1;
int b= 2;
int ans =0;
ans = fun(a,b);
cout<<ans<<endl;
a+=4;
b+=2;
ans = fun(a,b);

cout<<ans<<endl;
    return 0;
}