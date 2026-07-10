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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int i=0;
        int r = -1;
        int cnt=0;
        while(i<n)
        {
            if (s[i]=='1')
            {
                r = i+k;
                i++;
            }
            else if (i<=r)
            {
                i++;
            }
            else
            {
                cnt++;
                i++;
                r = 0;
            }
        }
        cout << cnt << endl;
    }
}