#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool pos(int k, vector<pair<int,int>> v)
{
    int x = 0;
    for(int i=0; i<v.size(); i++)
    {
        if (x<=v[i].second && k-x-1<=v[i].first) x++;

        if (x==k) return true;
    }
    if (x==k) return true;
    else return false;
}
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
        vector<pair<int,int>> vec;
        for(int i=0; i<n; i++)
        {
            int x, y;
            cin >> x >> y;
            vec.push_back({x,y});
        }

        int l=0;
        int r=n;
        int ans=1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if (pos(mid,vec)) 
            {
                ans = max(ans,mid);
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        cout << ans << endl;
    }
}