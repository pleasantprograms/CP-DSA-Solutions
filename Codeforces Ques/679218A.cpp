#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double p , r, x, m;
        cin >> p >> r >> x >> m;
        double ans = (m/(2.0*p*r));
        cout << (pow(ans,x)) << endl;
    }
}