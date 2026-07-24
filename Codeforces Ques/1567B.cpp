#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll x = 0;
        ll k = (a-1)%4;
        if (k==0) x = a-1;
        else if (k==1) x = 1;
        else if (k==2) x = a;
        else x = 0;

        if (x==b) cout << a << endl;
        else if ((x^b)!=a) cout << a+1 << endl;
        else cout << a+2 << endl;
    }
}