#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int c0 = 0; int c1=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if (a[i]==0) c0++;
            if (a[i]==1) c1++;
        }
        long long ans = 1;
        for(int i=1; i<=c0; i++)
        {
            ans*=2;
        } 
        cout << ans * c1 * 1LL << endl;
    }
}