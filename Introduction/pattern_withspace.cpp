 #include <iostream>
 using namespace std;
 int main(){
//   int n;
//   cin>>n;
//   int i =1;
//   while(i<=n){
//     int space=n-i;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     int j=1;
//     while(j<=i){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
//   }
// int n;
//   cin>>n;
//   int i =1;
//   while(i<=n){
//     // int space=n-i;
//     // while(space){
//     //     cout<<" ";
//     //     space--;}
    
//     int j=1;
//     int star=n-i+1;
//     while(j<=star){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
//   }
   int n;
  cin>>n;
  int i =1;
   
  while(i<=n){
    // int space=n-i;
    // while(space){
    //     cout<<" ";
    //     space--;}
//     int space=i-1;
//     while(space){
//         cout<<" ";
//         space--;

//     }
    
//     int j=1;
//    int star= n-i+1;
//     while(j<=star){
//         cout<<"*";
//         j++;
//     }
//     cout<<endl;
//     i++;
//   }
int space=i-1;
    while(space){
        cout<<" ";
        space--;

    }
    
    int j=1;
   int star= n-i+1;
    while(j<=star){
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
  }

    return 0;
 }
         
