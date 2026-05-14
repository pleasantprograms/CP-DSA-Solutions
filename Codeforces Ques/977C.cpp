#include <bits/stdc++.h>
using namespace std;
// #define int long long
// #define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i=0; i<n; i++)
    {
        cin >> p[i] ;
    }
    sort(p.begin(),p.end());
    if (k==0)
    {
        if (p[0]==1) cout << -1 << endl;
        else cout << 1 << endl;
    }
    else if (p[k-1]==p[k])
    {
        cout << -1 << endl;
    }
    else
    {
        cout << p[k-1] << endl;
    }
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    // cin >> t; 
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}