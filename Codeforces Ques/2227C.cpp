#include <bits/stdc++.h>
using namespace std;

 
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n;
    cin >> n;
    vector<int> d2, d3, d6, none;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if (x%6==0)
        {
            d6.push_back(x);
        }
        else if (x%3==0)
        {
            d3.push_back(x);
        }
        else if (x%2==0)
        {
            d2.push_back(x);
        }
        else
        {
            none.push_back(x);
        }
    }
    for(int i=0; i<d2.size(); i++)
    {
        cout << d2[i] << " " ;
    }
    for(int i=0; i<none.size(); i++)
    {
        cout << none[i] << " " ;
    }
    for(int i=0; i<d3.size(); i++)
    {
        cout << d3[i] << " " ;
    }
    for(int i=0; i<d6.size(); i++)
    {
        cout << d6[i] << " " ;
    }
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
    
    cin >> t; 
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