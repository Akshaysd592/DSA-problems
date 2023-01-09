 #include <bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cin>>row;
    int cols[row];
    for(int i=0;i<row;i++){
        cin>>cols[i];
    }


    int ** arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[cols[i]];
    }
    cout<<"Now you can input the values in dynamically allocated memory "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols[i];j++){
            cin>>arr[i][j];
        }
    }
     cout<<"showing data now"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols[i];j++){
            cout<<arr[i][j] <<' ';

        }
        cout<<endl;
    }
//deallocating the dynamically created 2d array
for(int i=0;i<row ;i++){
    delete []arr[i];
}
delete []arr;

   
    return 0;
}