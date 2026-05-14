#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(6), b(6), c(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cin >> c[i];
    }
    int a4 = 0, a5 = 0, a6 = 0, b4 = 0, b5 = 0, b6 = 0, c4 = 0, c5 = 0, c6 = 0;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] == 4)
        {
            a4++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (b[i] == 4)
        {
            b4++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (c[i] == 4)
        {
            c4++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (a[i] == 5)
        {
            a5++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (b[i] == 5)
        {
            b5++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (c[i] == 5)
        {
            c5++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (a[i] == 6)
        {
            a6++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (b[i] == 6)
        {
            b6++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (c[i] == 6)
        {
            c6++;
        }
    }

    double ans = static_cast<double>((a4 * (b5 * c6 + b6 * c5)) + (a5 * (b4 * c6 + b6 * c4)) + (a6 * (b4 * c5 + b5 * c4)));
    ans /= 216.000000;
    cout << ans << endl;
}