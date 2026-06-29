#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<double> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        double ans = 0;
        for(int i=0; i<n-1; i++)
        {
            double p = max(a[i],a[i+1]);
            double q = min(a[i],a[i+1]);
            if (p/q>2)
            {
                int k = p/q;
                if (((k&(k-1))==0) && (int)p%(int)q==0) ans+=floor(log2(p/q))-1;
                else ans+=floor(log2(p/q));
            }
        }
        cout << ans << endl;
    }
}