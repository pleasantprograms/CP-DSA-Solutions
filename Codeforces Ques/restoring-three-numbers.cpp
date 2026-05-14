#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d ;
    int p = max(a,max(b,max(c,d)));

    if (p==a)
    {
        cout << p-b << " " << p-c << " " << p-d << endl;
        return 0;
    }
    else if (p==b)
    {
        cout << p-a << " " << p-c << " " << p-d << endl;
        return 0;
    }
    else if (p==c)
    {
        cout << p-a << " " << p-b << " " << p-d << endl;
        return 0;
    }
    else
    {
        cout << p-a << " " << p-c << " " << p-b << endl;
        return 0;
    }
}