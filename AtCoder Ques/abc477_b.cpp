#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<pair<int,int>> p;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        p.push_back({x,i});
    }
    sort(p.begin(),p.end());
    vector<int> ans;
    for(int i=1; i<p.size()-1; i++)
    {
        int x = p[i].first;
        int y = p[i-1].first;
        int z = p[i+1].first;
        if (abs(x-y)>=d && abs(x-z)>=d) ans.push_back(p[i].second);
    }
    if (abs(p[1].first-p[0].first)>=d) ans.push_back(p[0].second);
    if (abs(p[n-1].first-p[n-2].first)>=d) ans.push_back(p[n-1].second);
    sort(ans.begin(),ans.end());
    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}