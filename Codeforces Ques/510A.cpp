#include <bits/stdc++.h>
using namespace std;
 
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
  int n, m;
  cin >> n >> m;
  for(int i=1; i<=n; i++)
  {
    for (int j=1; j<=m; j++)
    {
        if (i%2!=0)
        {
            cout << "#" ;
        }
        else
        {
            if (i%4==0)
            {
                if (j==1)
                {
                    cout << "#" ;
                }
                else
                {
                    cout << "." ;
                }
            }
            else
            {
                if (j==m)
                {
                    cout << "#" ;
                }
                else
                {
                    cout << "." ;
                }
            }
        }
    }
    cout << endl;
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