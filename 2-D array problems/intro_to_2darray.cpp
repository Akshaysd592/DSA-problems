#include <bits/stdc++.h>
using namespace std;

bool isfound(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sumrow(int arr[][4], int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << ' ' << endl;
    }
}

void columnsum(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << ' ' << endl;
    }
}

void maxrow(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rownum = -1;
    for (int i = 0; i < row; i++)
    {

        int sum = 0;

        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            rownum = i;
            maxi = sum;
        }
    }
    cout << "The max sum of row is " << maxi << endl;
    cout << "The row where maximum value obtained is " << rownum << endl;
}
int main()
{
    int arr[3][4];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
    // }
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the number to be find :" << endl;
    int target;
    cin >> target;
    if (isfound(arr, target, 3, 4))
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Not found " << endl;
    }

    cout << "printing sum of rows available in 2d array" << endl;
    sumrow(arr, 3, 4);

    cout << "Printing sum of column in available 2d array" << endl;
    columnsum(arr, 3, 4);
    cout << " finding maximum row value" << endl;
    maxrow(arr, 3, 4);
    return 0;
}