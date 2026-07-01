#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() 
{
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2 ;
    ll n;
    cin >> n;
    string s;
    cin >> s;

    vector<pair<ll,ll>> p;
    ll xsum = 0;
    ll ysum = 0;
    for(int i=0; i<n; i++)
    {
        if (s[i]=='U')
        {
            ysum+=1;
            p.push_back({xsum,ysum});
        }
        else if (s[i]=='D')
        {
            ysum-=1;
            p.push_back({xsum,ysum});
        }
        else if (s[i]=='L')
        {
            xsum-=1;
            p.push_back({xsum,ysum});
        }
        else
        {
            xsum+=1;
            p.push_back({xsum,ysum});
        }
    }
    ll low = 0;
    ll high = 1000000000000000000;
    ll mid = low + (high-low)/2;
    ll ans = -1;
    while(low<=high)
    {
        ll tempx = x1;
        ll tempy = y1;
        mid = low + (high-low)/2;
        ll r = mid/n;
        ll s = mid%n;

        tempx+=(p[n-1].first)*r;
        tempy+=(p[n-1].second)*r;

        if (s!=0)
        {
            tempx+=(p[s-1].first);
            tempy+=(p[s-1].second);
        }

        if ((abs(x2-tempx)+abs(y2-tempy))>mid)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
            ans = mid;
        }
    }
    cout << ans << endl;
}