#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<int> p[3];
        for (int i = 0; i < 3; i++)
        {
            int s = 0;
            p[i].push_back(s);
            for (int j = 0; j < n; j++)
            {
                int k;
                cin >> k;
                if ((s | k) != s)
                {
                    s |= k;
                    p[i].push_back(s);
                }
            }
        }
        bool ans = false;
        for (int a : p[0])
        {
            for (int b : p[1])
            {
                for (int c : p[2])
                {
                    if ((a | b | c) == x)
                        ans = true;
                }
            }
        }

        if (ans) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}