#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int q; string s, t;
    cin >> q >> s >> t;
    int n = s.size();
    int m = t.size();
    vector<int> idx;
    for(int i=0; i+m<=n; i++)
    {
        bool match = true;
        for(int j=i; j<i+m; j++)
        {
            if (s[j]!=t[j-i])
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            idx.push_back(i);
        }
    }
    int k = idx.size();
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        int req = lower_bound(idx.begin(),idx.end(),l-1)-idx.begin();

        if (req==k) cout << "No" << endl;
        else if (r-idx[req]>=m && idx[req]<=r-1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}