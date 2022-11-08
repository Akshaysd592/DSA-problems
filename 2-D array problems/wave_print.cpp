#include <bits/stdc++.h>
using namespace std;
void formated (int arr[][3],int row ,int col){
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}
int main()
{

    int arr[3][3] ;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }


    cout << "printing array in wave_form" << endl;
     formated(arr,3,3);
    return 0;
}