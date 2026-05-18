#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b;
        cin >> n >> a >> b;
        long long int p = 2 * a;
        long long int q = 3 * a;
        long long int k1, k2, k3;
        if (a > b)
            k1 = b;
        else
            k1 = a;

        if (p > b)
            k2 = b;
        else
            k2 = p;

        if (q > b)
            k3 = b;
        else
            k3 = q;

        long long int ans;

        if (n == 1)
            cout << k1 << endl;
        else if (n == 2)
            cout << k2 << endl;
        else
        {
            ans = (n / 3) * k3;

            if (n % 3 == 0)
            {
                cout << ans << endl;
            }
            else if (n % 3 == 1)
            {
                cout << ans + k1 << endl;
            }
            else
            {
                cout << ans + k2 << endl;
            }
        }
    }
}