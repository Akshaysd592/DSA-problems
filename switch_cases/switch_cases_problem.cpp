#include <iostream>
using namespace std;
int main(){

  int money=1330;
  switch(money){
 case 1330:
   case 100:

   cout<< "100 rupees notes is :"<< money/100 <<endl;
   money -= ( money/100)*100;
   case 50:
   cout<< "50 rupees notes is :"<< money/50<<endl;
   money -= ( money/50)*50;
   case 20:
   cout<< "20 rupees notes is :"<< money/20<< endl;
   money -= ( money/20)*20;
   case 1:
   cout<< "1 rupees notes is :"<< money/1 <<endl;
   money -= ( money/1)*1;



  }


    

    
    return 0;
}