#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int p=0;
        int q=0;
        int x, y;
        cin >> x >> y;
        if (y>q)
        {
            int k = y-q;
            p+=2*k;
        }
        else if (y<q)
        {
            int k = q-y;
            p+=4*k;
        }
        if ((x-p)%3==0 && x-p>=0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}