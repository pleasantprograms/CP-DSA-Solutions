#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        vector<int> ans(n);
        int sum = 0;
        int bmax = INT_MIN;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            bmax = max(bmax,b[i]);
            ans[i] = sum + (k-i-1)*(bmax);
        }
        int final = 0;
        for(int i=0; i<min(n,k); i++)
        {
            final = max(final,ans[i]);
        }
        cout << final << endl;
    }
    return 0;
}