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
        ll x, y, k;
        cin >> x >> y >> k;

        ll ans = k + ((k*(y+1)-1)/(x-1));
        if ((k*(y+1)-1)%(x-1)==0) cout << ans << endl;
        else cout << ans+1 << endl; 
    }
}