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
        ll n;
        cin >> n;
        if (n==1) cout << 1 << endl;
        else if (n==2) cout << -1 << endl;
        else
        {
            vector<ll> ans(55);
            ans[0]=1, ans[1]=2;
            ll sum = 3;
            for(int i=2; i<ans.size(); i++)
            {
                ans[i]=sum;
                sum+=ans[i];
            }

            for(int i=0; i<n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }

    }
}