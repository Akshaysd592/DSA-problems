#include <bits/stdc++.h>
using namespace std;
// to find gcd or hcf
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    if (a > 0)
    {
        return a;
    }
    else
        return b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int result = gcd(a, b);
    cout << "The gcd of " << a << " and " << b << " is " << result << endl;
}