#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g, c, l;
    cin >> g >> c >> l;

    int a = max(g,max(c,l));
    int b = min(g,min(c,l));

    if (a-b>=10)
    {
        cout << "check again" << endl;
        return 0;
    }

    if (a==g && b==l || a==l && b==g)
    {
        cout << "final " << c << endl;
        return 0;
    }
    else if (a==c && b==l || a==l && b==c)
    {
        cout << "final " << g << endl;
        return 0;
    }
    else
    {
        cout << "final " << l << endl;
        return 0;
    }
}