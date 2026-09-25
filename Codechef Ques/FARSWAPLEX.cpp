#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> p(n);
        for (ll i = 0; i < n; i++)
            cin >> p[i];
        bool a;

        for (int i = 0; i < n - 1; ++i)
        {
            a = false;
            for (int j = 0; j < n - i - 1; ++j)
            {
                if (p[j] - p[j + 1] > 1)
                {
                    swap(p[j], p[j + 1]);
                    a = true;
                }
            }
            if (!a)
                break;
        }

        for (int i = 0; i < n; i++)
            cout << p[i] << " ";
        cout << endl;
    }
}