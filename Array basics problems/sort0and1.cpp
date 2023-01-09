#include <bits/stdc++.h>
using namespace std;
void printingarray(bool arr1[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << arr1[i] << " ";
    }
}
void sorting_array(vector<int>&arr)
{
    int e = arr.size() - 1;
    int s = 0;
    while (s <= e)
    {
        if (arr[s] == 1 && arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
         if (arr[s] == 0 && arr[e] == 0)
        {
            s++;
        }
         if (arr[s] == 1 && arr[e] == 1)
        {
            e--;
        }
        
        
            
        
    }
}

void showarray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;

        arr.push_back(element);
    }
    
    
    // int count=0;
    // for(int i=0;i<10;i++){
    //     if(arr[i]==0){
    //         count++;
    //         arr[i]=1;
    //     }
    // }
    // for(int i=0;i<count;i++){
    //     arr[i]=0;
    // }

    // printingarray(arr,10);
    sorting_array(arr);
    showarray(arr);
    return 0;
}