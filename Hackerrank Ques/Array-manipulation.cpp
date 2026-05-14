#include <bits/stdc++.h>
using namespace std;
 
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> initial(n+10,0);
    for(int i=0; i<m; i++)
    {
        int a, b, k;
        cin >> a >> b >> k; 
        initial[a]+=k;
        initial[b+1]-=k;
    }
    int sum = 0;
    vector<int> ans;
    int p = INT_MIN;
    for (int i=1; i<=n; i++)
    {
        sum+=initial[i];
        ans.push_back(sum);
    }
    for(int i=0; i<n; i++)
    {
        p = max(p,ans[i]);
    }
    cout << p << endl;
    for (int i=0; i<n; i++)
    {
        cout << ans[i] << " ";
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