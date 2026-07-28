#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        for(ll i=n; i<=n+10000; i++)
        {
            ll temp = i;
            bool div = true;
            while(temp!=0)
            {
                ll digit = temp%10;
                if (digit!=0)
                {
                    if ((i%digit)!=0)
                    {
                        div = false;
                        break;
                    }
                }
                temp/=10;
            }
            if (div==true)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}