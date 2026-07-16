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
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        
        vector<int> freqa(2*n+5);
        vector<int> freqb(2*n+5);
        int cnta = 1;
        int cntb = 1;
        int vala = a[0];
        int valb = b[0];

        freqa[vala] = 1;
        freqb[valb] = 1;
        for(int i=1; i<n; i++)
        {
            if (a[i]==vala)
            {
                cnta++;
            }
            else
            {
                cnta=1;
                vala = a[i];
            }

            if (b[i]==valb)
            {
                cntb++;
            }
            else
            {
                cntb=1;
                valb = b[i];
            }

            freqa[a[i]] = max(freqa[a[i]],cnta);
            freqb[b[i]] = max(freqb[b[i]],cntb);
        }
        
        int ans = 0;
        for(int i=0; i<freqa.size(); i++)
        {
            int sum = freqa[i]+freqb[i];
            ans = max(ans,sum);
        }
        cout << ans << endl;
    }
}