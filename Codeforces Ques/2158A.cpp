#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, y, r;
        cin >> n >> y >> r;
        int temp = n;

        int ans = temp-r-y/2;
        if (ans<=0)
        {
            cout << n << endl;
        }
        else
        {
            cout << n-ans << endl;
        }
    }
}