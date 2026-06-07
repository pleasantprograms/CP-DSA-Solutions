#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cb=0, cw=0;
        for(int i=0; i<k; i++)
        {
            if (s[i]=='B') cb++;
            else cw++;
        }
        int ans = cw;
        for(int i=k; i<n; i++)
        {
            if (s[i]=='B')
            {
                cb++;
                if (s[i-k]=='B')
                {
                    cb--;
                }
                else cw--;
            }
            else
            {
                cw++;
                if (s[i-k]=='B')
                {
                    cb--;
                }
                else cw--;
            }
            ans = min(ans,cw);
        }
        cout << ans << endl;
    }
}