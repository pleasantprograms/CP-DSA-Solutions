#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll p,q;
        cin >> p >> q;
        ll a = min(p,q);
        ll b = max(p,q);
        ll k = b-a;
        if(k==0)
        {
            cout << "0 0" << endl;
        }
        else
        {
            ll p = max(gcd(a-a%k,b-a%k),gcd(a+k-a%k,b+k-a%k));
            ll q;
            if (gcd(a-a%k,b-a%k)==gcd(a+k-a%k,b+k-a%k)) q = min(a%k,k-a%k);
            else if (p==gcd(a-a%k,b-a%k)) q = a%k;
            else q = k-a%k;

            cout << p << " " << q << endl;
        }
    }
}