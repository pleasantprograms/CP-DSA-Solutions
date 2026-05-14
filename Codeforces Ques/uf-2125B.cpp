#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, k;
        cin >> a >> b >> k;
        int p = gcd(a,b);
        if ((a<=k && b<=k) || (p!=1 && p<=k) || (a==b))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}