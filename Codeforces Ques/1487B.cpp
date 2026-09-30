#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        k--;
        ll val = n/2;
        cout << (k + (n%2)*(k/val))%n + 1 << endl;
    }
}