#include <bits/stdc++.h>
using namespace std;
// #define int long long
// #define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    int x=0;
    int c0 = 0;
    for(int i=0; i<n; i++) 
    {
        cin >> p[i];
        x = x^p[i];
        if (p[i]==0) c0++;
    }
    if (c0==n) cout << 0 << endl;
    else if (x==0)
    {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
    }
    else
    {
        if ((n-c0)%2==0)
        {
            if (n%2==0)
            {
                cout << 2 << endl;
                cout << 1 << " " << n << endl;
                cout << 1 << " " << n << endl;
            }
            else
            {
                cout << 4 << endl;
                cout << 1 << " " << n << endl;
                cout << 1 << " " << n-1 << endl;
                cout << n-1 << " " << n << endl;
                cout << n-1 << " " << n << endl;
            }
        }
        else
        {
            if (n%2!=0)
            {
                cout << 4 << endl;
                cout << 1 << " " << n << endl;
                cout << 1 << " " << n-1 << endl;
                cout << n-1 << " " << n << endl;
                cout << n-1 << " " << n << endl;
            }
            else
            {
                cout << 2 << endl;
                cout << 1 << " " << n << endl;
                cout << 1 << " " << n << endl;
            }
        }
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