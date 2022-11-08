#include <bits/stdc++.h>
using namespace std;

int palindrome(char arr[],int n){
    int s= 0;
    int e= n-1;
    while(s<=e){
        if(arr[s]==arr[e]){
            s++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;

}

void reverse(char arr[],int n){
    int s =0;
    int e=n-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
}


int length (char a[]){
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;

    }
    return count ;
}
int main(){

    char name[20];
    cout<<"Enter your name : "<<endl;
    cin>>name;

    cout<<"Your name is :"<<name;
    cout<<endl;
    int n= length(name);
    cout<<" and your name length is : "<<n<<endl;
     reverse(name ,n);
     cout<<"reverse of your name is "<<name<<endl;


     cout<<"checking the string is palindrome or not :";
     cout<<palindrome(name ,n);
    return 0;
}