#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i=0; i<n; i++) cin >> p[i];
        
        vector<int> a(n+1), b(n+1);

        bool ans = false;
        for(int i=0; i<n; i++)
        {
            a[i+1] = a[i] + (p[i]==1 ? 1 : -1);
            b[i+1] = b[i] + (p[i]==3 ? -1 : 1);
        }
        int x = INT_MAX;

        for(int i=1; i<n; i++)
        {
            if (b[i]-x>=0)
            {
                ans = true;
                break;
            }
            if (a[i]>=0)
            {
                x =  min(x,b[i]);
            }
        }

        cout << (ans==1 ? "YES" : "NO") << endl;
    }
}