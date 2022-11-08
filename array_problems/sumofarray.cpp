#include <bits/stdc++.h>
using namespace std;
vector <int > reverse(vector<int> d){
    int s=0;
    int e= d.size()-1;
    while(s<=e){
        swap(d[s],d[e]);
        s++;
        e--;
    }
    return d;
}
vector <int> addarray(vector<int> &arr1,vector <int>&arr2){
    int i= arr1.size()-1;
    int j= arr2.size()-1;
    int carry= 0;
    vector<int> v;


    
    while(i>=0 && j>=0){
    int num1 = arr1[i];
     int num2= arr2[j];
    int sum = num1+num2+carry;
    carry= sum /10;
     sum =sum%10;
     v.push_back(sum);
     j--;
     i--;

    }

     while(i>=0){
        int sum = arr1[i]+ carry;
        carry = sum / 10;
        sum = sum %10;
        v.push_back(sum);
        i--;
     }
     while(j>=0){
        int sum = arr2[j] +carry;
         carry = sum / 10;
        sum = sum %10;
        v.push_back(sum);
        j--;
     }
     while(carry !=0){
         v.push_back (carry);
         break;
     }
     return reverse(v);
}
int main(){
    vector < int> array1 ={1,1,1,1,1,1};
     vector <int> array2 ={1,1,1};
    vector<int> arr= addarray(array1,array2);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}