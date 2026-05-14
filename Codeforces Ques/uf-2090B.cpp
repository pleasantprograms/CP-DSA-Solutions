#include <bits/stdc++.h>
using namespace std;
// #define int long long
// #define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool ans;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ans = true;
            if (i!=0 && j!=0)
            {
                if (arr[i][j]=='1')
                {
                    if (arr[i-1][j]=='1')
                    {

                    }
                    else if (arr[i][j-1]=='1')
                    {

                    }
                    else 
                    {
                        ans = false;
                        break;
                    }
                }
            }
            if (ans==false) break;
        }
        if (ans==false) break;
    }
    if (ans==false) cout << "No" << endl;
    else cout << "Yes" << endl;
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    cin >> t; 
    for(int i = 1; i <= t; i++) 
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}