#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x, y, a;
        cin >> x >> y >> a ;
        long long int k = a/(x+y);

        if ((x+y)*k + x > a + 0.5)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}