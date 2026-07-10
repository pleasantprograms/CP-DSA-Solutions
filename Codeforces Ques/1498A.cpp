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
        ll n;
        cin >> n;
        for(ll i = n; i<=1000000000000000002; i++)
        {
            ll temp = i;
            ll sum = 0;
            while(temp!=0)
            {
                ll digit = temp%10;
                sum+=digit;
                temp/=10;
            }
            if (gcd(i,sum)>1)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}