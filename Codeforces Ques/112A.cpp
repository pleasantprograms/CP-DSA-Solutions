#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    for(int i=0; i<a.length(); i++)
    {
        if (a[i]>=97 && a[i]<=122)
        {
            a[i]-=32;
        }
    }
    for(int i=0; i<b.length(); i++)
    {
        if (b[i]>=97 && b[i]<=122)
        {
            b[i]-=32;
        }
    }
    if (a==b)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (a<b)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        cout << 1 << endl;
        return 0;
    }
}