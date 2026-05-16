#include <bits/stdc++.h>
using namespace std;
// #define int long long
// #define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    string ans;
    vector<int> freq(26,0);
    for (int i=0; i<s.length(); i++)
    {
        freq[s[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if (freq[i]%k!=0)
        {
            cout << -1 << endl;
            return;
        }
    }
    for(int i=0; i<26; i++)
    {
        for(int j=1; j<=freq[i]/k; j++)
        {
            ans.push_back(i+'a');
        }
    }
    string temp = ans;
    for(int i=1; i<=k-1; i++)
    {
        ans+=temp;
    }
    cout << ans << endl;
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    //cin >> t; 
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