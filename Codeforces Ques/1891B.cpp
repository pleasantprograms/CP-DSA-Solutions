#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<ll> freq(35);
        vector<ll> p;

        for(int i=0; i<q; i++)
        {
            ll x;
            cin >> x;
            if (freq[x]==0)
            {
                freq[x]++;
                p.push_back(x);
            }
        }

        for(int i=0; i<p.size(); i++)
        {
            ll k = p[i];
            ll s = 1LL;
            for(int i=1; i<=k; i++) s*=2*1LL;

            for(int i=0; i<n; i++)
            {
                if (a[i]%s==0) a[i]+=(s/2);
            }
        }

        for(int i=0; i<n; i++) cout << a[i] << " " ;
        cout << endl;
    }
}