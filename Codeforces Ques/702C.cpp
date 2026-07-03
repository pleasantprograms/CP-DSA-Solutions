#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;

    vector<ll> c(n); //city
    vector<ll> t(m); //tower

    for(ll i=0; i<n; i++) cin >> c[i];
    for(ll i=0; i<m; i++) cin >> t[i];

    sort(t.begin(),t.end());

    vector<ll> req;

    for(ll i=0; i<n; i++)
    {
        auto lb = lower_bound(t.begin(),t.end(),c[i]);

        ll idxu = lb - t.begin();
        ll idxl;

        if (idxu == m) 
        {
            idxu--;
            idxl = idxu;
        }
        else if (idxu == 0)
        {
            idxl = idxu;
        }
        else
        {
            idxl = idxu-1;
        }

        ll ud = abs(t[idxu] - c[i]);
        ll ld = abs(t[idxl] - c[i]);
        req.push_back(min(ud,ld));
    }

    sort(req.begin(),req.end());
    cout << req[req.size()-1] << endl;
}