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
        string s;
        cin >> s;
        int k;
        cin >> k;
        int n = s.length();
        vector<pair<char,int>> idx;
        for(int i=0; i<n; i++)
        {
            idx.push_back({s[i],i});
        }
        sort(idx.begin(),idx.end());
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += (idx[i].first-'a'+1);
        }
        for(int i=n-1; i>=0; i--)
        {
            if (sum<=k) break;
            else
            {
                sum-= (idx[i].first-'a'+1);
                idx[i].first = '0';
            }
        }

        vector<pair<int,char>> ans;
        for(int i=n-1; i>=0; i--)
        {
            if (idx[i].first!='0') ans.push_back({idx[i].second,idx[i].first});
        }
        sort(ans.begin(),ans.end());
        string final="";
        for(int i=0; i<ans.size(); i++)
        {
            final.push_back(ans[i].second);
        }
        cout << final << endl;
    }
}