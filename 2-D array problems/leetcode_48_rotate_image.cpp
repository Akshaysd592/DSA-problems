#include <bits/stdc++.h>
#include <vector>
using namespace std;
void showingdata(vector<int> &arr)
{

    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << " ";
    }
}

void rotating_image(vector<vector<int>> &arr)
{
    vector<int> arr1;
    int arrsize = arr.size();
    int startingrow = 0;
    int endrow = arrsize - 1;
    while (startingrow < arrsize && endrow >= 0)
    {
        for (int i = endrow; i >= 0; i--)
        {
            arr1.push_back(arr[i][startingrow]);
        }
        startingrow++;
    }

    showingdata(arr1);
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << " After rotating the 2d array or matrix" << endl;
    rotating_image(arr);

    return 0;
}