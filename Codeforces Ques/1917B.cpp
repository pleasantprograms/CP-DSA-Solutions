#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char,int> mpp;
        int ans = 0;
        mpp[s[0]]++;
        for(int i=1; i<n; i++)
        {
            mpp[s[i]]++;
            ans+=mpp.size();
        }
        cout << ans + 1 << endl;
    }
}