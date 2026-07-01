#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() 
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    ll mid = a[n/2];
    ll g = 1; 
    for(ll i = n/2 + 1; i<n; i++)
    {
        ll cost = (a[i] - mid)*(g);
        if (cost>k) break;
        else 
        {
            mid = a[i];
            g++;
            k-=cost;
        }
    }
    cout << mid + k/g << endl;
}