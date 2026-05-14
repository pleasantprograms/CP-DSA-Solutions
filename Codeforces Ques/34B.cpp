#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin >> p[i];
    sort(p.begin(),p.end());
    long long ans = 0;
    for(int i=0; i<m; i++)
    {
        if (p[i]<0)
        {
            ans += abs(p[i]);
        }
    }
    cout << ans << endl;
}