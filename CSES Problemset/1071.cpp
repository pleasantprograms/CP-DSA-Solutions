#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x, y;
        cin >> y >> x;
        if (x==y)
        {
            cout << x*x - x + 1 + 0LL << endl; 
        }
        else if (x>y)
        {
            if (x%2==0)
            {
                cout << x*x - 2*x + y + 1 + 0LL << endl;
            }
            else
            {
                cout << x*x - y + 1 + 0LL << endl;
            }
        }
        else
        {
            if (y%2==0)
            {
                cout << y*y - x + 1 + 0LL << endl;
            }
            else
            {
                cout << y*y - 2*y + x + 1 + 0LL << endl;
            }
        }
    }
    return 0;
}