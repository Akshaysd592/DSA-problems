#include <bits/stdc++.h>
using namespace std;
void swaping(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {   bool swapped= false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped= true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}


void showsorted_arr (int arr1[],int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}
int main()
{

    int arr[6] = {10, 1, 7, 6, 14, 9};
    swaping(arr, 6);
    showsorted_arr(arr,6);
    return 0;
}