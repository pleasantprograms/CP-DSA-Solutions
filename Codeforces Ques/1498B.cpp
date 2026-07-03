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
        ll n, w;
        cin >> n >> w;
        map<ll,ll> mpp;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            mpp[x]++;
        }
        ll height = 0LL;
        ll rem = w;
        while(mpp.size()!=0)
        {
            auto req = mpp.upper_bound(rem);
            if (req == mpp.begin()) 
            {
                height++;
                rem = w;
            }
            else
            {
                req--;
                mpp[(*req).first]--;
                rem-=(*req).first;
                if (mpp[(*req).first]==0LL) mpp.erase((*req).first);
            }
        } 
        cout << height+1 << endl; 
    }
}