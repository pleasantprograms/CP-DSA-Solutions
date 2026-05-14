#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p = INT_MAX;
    int a;

    while (n--)
    {
        cin >> a;

        if (a<0)
        {
            a=-a;
        }

        p = min(p,a);
    }
    cout << p << endl;
    return 0;
}