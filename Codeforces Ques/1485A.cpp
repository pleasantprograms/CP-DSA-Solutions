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
        ll a, b;
        cin >> a >> b;

        if (a<b) cout << 1 << endl;
        else if (a==b) cout << 2 << endl;
        else
        {
            ll ans = INT_MAX;
            for(int i=b; i<=b+10; i++)
            {
                ll temp = a;
                ll cnt = 0;
                while(temp!=0 && i!=1)
                {
                    temp/=i;
                    cnt++;
                }
                if (cnt!=0) ans = min(ans,cnt+i-b);
            }
            cout << ans << endl;
        }
    }
}