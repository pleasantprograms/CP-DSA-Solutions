#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; //testcases
    cin >> t ;

    int a, b, c, d;

    while (t--)
    {
        cin >> a >> b >> c >> d ;

        if (a==b && a==c && a==d)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}