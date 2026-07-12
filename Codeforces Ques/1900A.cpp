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
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool k = false;
        for(int i=0; i<n-2; i++)
        {
            if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
            {
                k = true;
                break;
            }
        }
        if (k==true)
        {
            cout << 2 << endl;
        }
        else
        {
            int cnt = 0;
            for(int i=0; i<n; i++) if (s[i]=='.') cnt++;
            cout << cnt << endl;
        }
    }
}