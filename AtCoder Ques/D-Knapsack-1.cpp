#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<ll>> t;

ll f(vector<ll>& wt, vector<ll>& v, ll w, ll i)
{
    if (i<0 || w<=0) return 0;

    if (t[i][w]!=-1) return t[i][w];
    else
    {
        if (wt[i]<=w) return t[i][w] = max(v[i]+f(wt, v, w-wt[i], i-1), f(wt, v, w, i-1));
        else return t[i][w] = f(wt, v, w, i-1);
    }
}

int main()
{
    ll n, w;
    cin >> n >> w;
    vector<ll> wt(n), v(n);
    for(ll i=0; i<n; i++) cin >> wt[i] >> v[i];
    t.assign(n+5, vector<ll>(w + 5, -1));
    cout << f(wt, v, w, n-1) << endl;
}