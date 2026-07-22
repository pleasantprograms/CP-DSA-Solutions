#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        if (2*k>n) cout << -1 << endl;
        else
        {
            int cnt = 0;
            for(int i=0; i<k; i++)
            {
                if (s[i]=='L') cnt++;
            }
            for(int i=n-1; i>=n-k; i--)
            {
                if (s[i]=='R') cnt++;
            }
            cout << cnt << endl;
        }
    }
}