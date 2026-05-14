#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int p;
            cin >> p;
            a.push_back(p);
        }
        int ans = a[0];
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans,a[i+1]-a[i]);
        }
        ans = max(ans, 2*(x-a[n-1]));
        cout << ans << endl;
    }
}