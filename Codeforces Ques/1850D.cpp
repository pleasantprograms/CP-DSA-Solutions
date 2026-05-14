#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int c=1;
        int ans=1;
        for(int i=0; i<n-1; i++)
        {
            if (a[i+1]-a[i]<=k)
            {
                c++;
                ans=max(ans,c);
            }
            else
            {
                c=1;
            }
        }
        cout << n-ans << endl;
    }
}