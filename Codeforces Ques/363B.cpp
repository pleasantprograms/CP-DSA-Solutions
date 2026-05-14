#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

 
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i = 0; i<n; i++)
    {
        cin >> p[i];
    }
    int ans = 0;
    int sum = 0;
    for(int i=0; i<k; i++)
    {
        sum+=p[i];
    }
    ans = sum;
    int temp=ans;
    int final=1;
    for(int i = k; i<n; i++)
    {
        sum+=p[i];
        sum-=p[i-k];
        ans = min(ans,sum);
        if (ans != temp)
        {
            temp = ans;
            final = i-k+2;
        }
    }
    cout << final << endl;
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