#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        int ans;
        for(int i=0; i<n; i++) 
        {
            cin >> p[i];
        }
        ans = abs(p[0]-1);
        for(int i=0; i<n; i++) 
        {
            if (p[i]!=i+1) ans = __gcd(ans,abs(p[i]-i-1));
        }
        cout << ans << endl;
    }
}