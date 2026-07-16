#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        char curr;
        cin >> curr;

        string s;
        cin >> s;
        
        if (curr=='g') cout << 0 << endl;
        else
        {
            vector<int> curridx;
            vector<int> gidx;

            for(int i=0; i<n; i++)
            {
                if (s[i]==curr) curridx.push_back(i);
                if (s[i]=='g') gidx.push_back(i);
            }

            int ans = INT_MIN;
            for(int i=0; i<curridx.size(); i++)
            {
                int idx = lower_bound(gidx.begin(),gidx.end(),curridx[i]) - gidx.begin();
                if (idx==gidx.size()) idx = n+gidx[0];
                else idx = gidx[idx];

                ans = max(ans,idx-curridx[i]);
            }
            cout << ans << endl;
        }
    }
}