#include <bits/stdc++.h>
using namespace std;
// #define int long long
// #define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
  int n;
  cin >> n;
  vector<int> val;
  vector<int> ans;
  int arr[105][105]={0};
  for(int i=0; i<n; i++)
  {
        int x;
        cin >> x;
        val.push_back(x);
        for(int j=0; j<x; j++)
        {
            arr[j][i]=1;
        }
  }
  
  for(int i=0; i<n-1; i++)
  {
        for(int j=0; j<val[i]; j++)
        {
            if (arr[i][j]==1 && arr[i-1][j]==0)
            {
                arr[i+1][j]=1;
                arr[i][j]=0;
            }
        }
  }

  for(int i=0; i<n; i++)
  {
        for(int j=0; j<val[i]; j++)
        {
            if (arr[i][j]==1 && arr[i][j+1]==0)
            {
                arr[i][j+1]=1;
                arr[i][j]=0;
            }
        }
  }
  for(int i=0; i<n; i++)
  {
        int count=0;
        for(int j=0; j<val[i]; j++)
        {
            if (arr[j][i]==1) count++;
        }
        ans.push_back(count);
  }
  for(int i=0; i<ans.size(); i++) cout << ans[i] << " " ;
  cout << endl;
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