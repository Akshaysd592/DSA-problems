#include <bits/stdc++.h>
using namespace std;
int maxofarray(int arr1[],int size)
{
    int maximum = INT32_MIN;
    
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] > maximum)
        {
            maximum = arr1[i];
        }
    }
    return maximum;
}
int main()
{
    int arr[5] = {3, 4, 1, 9, 3};
    
    cout << "Maximum of the array is " << maxofarray(arr,5);
    return 0;
}