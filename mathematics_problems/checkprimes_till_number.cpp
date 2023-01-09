#include <bits/stdc++.h>
using namespace std;
int checkprimes(int n)
{
    bool arr[n];
    arr[0] = arr[1] = false;
    for (int i = 2; i < n; i++)
    {
        arr[i] = true;
    }
    if (n <= 1)
    {
        return 0;
    }
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (arr[i] == true)
        {
            count++;
        }

        for (int j = i+i; j < n; j += i)
        {
            arr[j] = false;
        }
    }
    return count;
}
int main()
{
   
    cout << "The amount of prime number till given number 20 is  " << checkprimes(24);
    return 0;
}