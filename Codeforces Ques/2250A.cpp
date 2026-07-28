#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        if (n%2!=0) cout << "NO" << endl;
        else
        {
            int omin = INT_MIN;
            int emax = INT_MAX;
            for(int i=0; i<n; i++)
            {
                if (i%2==0) emax = min(emax,a[i]);
                else omin = max(omin,a[i]);
            }

            if (emax-omin>1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}