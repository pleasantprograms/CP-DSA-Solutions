#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> p(n);
    for(int i=0; i<n; i++) cin >> p[i];

    vector<ll> pref;
    vector<ll> suff;
    pref.push_back(0LL);
    suff.push_back(0LL);

    for(int i=0; i<n; i++)
    {
        pref.push_back(pref[i]+p[i]);
    }
    ll sum = 0;
    for(int i=n-1; i>0; i--)
    {
        sum+=p[i];
        suff.push_back(sum);
    }
    ll final = 0;
    for(int i=0; i<pref.size(); i++)
    {
        ll target = pref[i];
        int l = 0;
        int r = suff.size()-1;
        int mid = l + (r-l)/2;
        ll ans = 0;
        while(l<=r)
        {
            mid = l + (r-l)/2;
            if (suff[mid]==target)
            {
                ans = suff[mid];
                break;
            }
            else if (suff[mid]>target)
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        if (mid+i<=n)
        {
            final = max(final,ans);
        }
    }
    cout << final << endl;
}
