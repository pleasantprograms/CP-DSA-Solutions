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
        string s;
        cin >> s;
        int n = s.length();
        int c0=0, c1=0;

        for(int i=0; i<n; i++)
        {
            if (s[i]=='0') c0++;
            else c1++;
        }

        int t = 0;
        for(int i=0; i<n; i++)
        {
            if (s[i]=='1' && c0>0)
            {
                c0--;
                t++;
            }
            else if (s[i]=='0' && c1>0)
            {
                c1--;
                t++;
            }
            else break;
        }
        cout << n-t << endl;
    }
}