#include <bits/stdc++.h>
using namespace std;

bool power(long long n)
{
    while(n!=0)
    {
        if (n%2!=0 && n!=1) return false;
        n/=2;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long p = max(a,b);
        long long q = min(a,b);

        long long k = p/q;
        if (p%q!=0) cout << -1 << endl;
        else if (!(power(k))) cout << -1 << endl;
        else
        {
            long long f = log2(k);
            cout << (f+2)/3 << endl;
        }
    }
}