#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int n = s.length();

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                s.erase(i,1);
                break;
            }
        }
        string a = s;
        string b = s;

        for(int i=0; i<n-1; i++)
        {
            if (a[i]=='1')
            {
                a.erase(i,1);
                break;
            }
        }

        for(int i=n-1; i>=0; i--)
        {
            if (b[i]=='1')
            {
                b.erase(i,1);
                break;
            }
        }

        if (a>b) cout << b << endl;
        else cout << a << endl;
    }
}