#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll n)
{
    ll lim = sqrt(n);
    for(ll i=2; i<=lim; i++) if (n%i==0) return false;
    return true;
}
int main()
{
    ll t;
    cin >> t;
    vector<ll> p;
    for(ll i=2; i<=50000; i++) if (isPrime(i)) p.push_back(i);
    while(t--)
    {
        ll d;
        cin >> d;
        ll lim1 = 1+d;
        ll req = 0;
        for(ll i=0; i<p.size(); i++)
        {
            if (p[i]>=lim1)
            {
                lim1 = p[i];
                req = i;
                break;
            }
        }
        ll lim2 = lim1+d;
        for(ll i=req; i<p.size(); i++)
        {
            if (p[i]>=lim2)
            {
                lim2 = p[i];
                break;
            }
        }
        cout << lim1*lim2 << endl; 
    }
}