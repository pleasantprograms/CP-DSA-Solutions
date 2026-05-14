#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> p(m);
    for(int i=0; i<m; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(),p.end());
    int ans = INT_MAX;
    for(int i=0;n+i<=m; i++)
    {
        ans = min(ans,p[n+i-1]-p[i]);
    }
    cout << ans << endl;
}