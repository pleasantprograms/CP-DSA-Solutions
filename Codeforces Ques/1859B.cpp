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
        vector<vector<ll>> p;
        cin >> n;
        for(ll i=0; i<n; i++)
        {
            ll m;
            cin >> m;
            vector<ll> q;
            for(ll i=0; i<m; i++)
            {
                ll x;
                cin >> x;
                q.push_back(x);
            }
            sort(q.begin(),q.end());
            swap(q[1],q[0]);
            p.push_back(q);
        }
        sort(p.begin(),p.end());
        ll sum = 0;
        ll minel = p[0][1];
        for(ll i=1; i<n; i++)
        {
            minel = min(minel,p[i][1]);
            sum+=p[i][0];
        }
        
        cout << sum+minel << endl;
    }
}
