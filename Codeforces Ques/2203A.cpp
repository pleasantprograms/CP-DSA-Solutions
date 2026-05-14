#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (a>b)
        {
            cout << n << endl;
        }
        else
        {
            int p = b/a;
            if (n%(p+1)==0)
            {
                cout << (n/(p+1)) << endl;
            }
            else
            {
                cout << (n/(p+1)) + 1 << endl;
            }
        }
    }
}