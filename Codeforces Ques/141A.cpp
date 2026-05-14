#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    for (int i=0; i<a.size(); i++)
    {   
        int p=0;
        for (int j=0; j<c.size(); j++)
        {
            if (a[i]==c[j])
            {
                c[j]='0';
                p=1;
                break;
            }
        }
        if (p==0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    for (int i=0; i<b.size(); i++)
    {
        int p=0;
        for (int j=0; j<c.size(); j++)
        {
            if (b[i]==c[j])
            {
                c[j]='0';
                p=1;
                break;
            }
        }
        if (p==0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    int count=0;
    for (int i=0; i<c.size(); i++)
    {
        if (c[i]=='0')
        {
            count++;
        }
    }

    if (count==c.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}