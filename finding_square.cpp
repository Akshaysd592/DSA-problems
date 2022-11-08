#include <bits/stdc++.h>
using namespace std;
double morepresion(int a , int precision, int result){
    double factor = 1;
    double ans= result;
    for(int i=0;i<precision;i++){
        factor= factor/10;
        for(double j=ans;j*j<a;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int search_square(int a){
    int start=0, end=a;
    int mid= start+ (end- start)/2;
    while(end>=start){
    if(mid*mid>a){
        end= mid-1;

    }
    else if(mid* mid<a){
        start= mid+1;

    }
    else if( mid* mid == a ) {
        return mid;
    }
     mid= start +(end-start)/2;
    }
    return end;
}
int main(){
    int n;
    cout<<"Enter the number whosea root to be find"<<endl;
    cin >>n;
    int result = search_square(n);
    cout<< "result is "<<morepresion(n,3,result);
    return 0;
}
