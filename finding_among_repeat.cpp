#include <bits/stdc++.h>
using namespace std;

int  value(int arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
       
        for (int j = i+1 ;j < n; j++)
        {
            if (arr[i] == arr[j])
            {  
                cout<<arr[i]<<endl;
                
            
            }
        }
            
    }
    return 1;
}
    

int main()
{
   
    int arr[10] = {3, 4, 2, 3, 4, 1, 1 };
    int result=value(arr,7);
    

    return 0;
}