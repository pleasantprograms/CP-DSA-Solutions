#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, c, m;
        cin >> a >> b >> c >> m;
        long long int wa, wb, wc;
        long long int lab=(a*b)/(__gcd(a,b));
        long long int lbc=(c*b)/(__gcd(c,b));
        long long int lac=(a*c)/(__gcd(a,c));
        long long int labc=lcm(a,(lcm(b,c)));

        wa = 6*(m/a) - 3*(m/lab) - 3*(m/lac) + 2*(m/labc);
        wb = 6*(m/b) - 3*(m/lab) - 3*(m/lbc) + 2*(m/labc);
        wc = 6*(m/c) - 3*(m/lbc) - 3*(m/lac) + 2*(m/labc);

        cout << wa << " " << wb << " " << wc << endl;
    }

}