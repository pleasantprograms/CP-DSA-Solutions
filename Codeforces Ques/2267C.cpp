#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> v(300005);
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, x;
        cin >> n >> x;
        unordered_map<ll,ll> mpp;
        for(ll i=0; i<n; i++)
        {
            ll y;
            cin >> y;
            mpp[y]++;
        }

        vector<ll> modified;
        for(pair p: mpp)
        {
            if (gcd(p.first,x)!=1)
            {
                ll z = gcd(p.first,x);
                for(ll i=1; i<=sqrt(z); i++)
                {
                    if (z%i==0)
                    {
                        if (z!=i*i)
                        {
                            if (v[i]==0) modified.push_back(i);
                            if (v[z/i]==0) modified.push_back(z/i);
                            v[i]+=p.first*p.second;
                            v[z/i]+=p.first*p.second;
                        }
                        else 
                        {
                            if (v[i]==0) modified.push_back(i);
                            v[i]+=p.first*p.second;
                        }
                    }
                }
            }
        }

        ll ans = 0;
        for(ll idx: modified) if (idx>=2 && idx<=x) ans = max(ans,v[idx]);
        for(ll i=0; i<modified.size(); i++)
        {
            v[modified[i]]=0;
        }
        cout << ans << endl;
    }
}