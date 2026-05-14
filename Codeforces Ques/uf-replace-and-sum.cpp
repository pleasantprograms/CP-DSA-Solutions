#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int> a;
        vector<int> b;
        vector<int> l;
        vector<int> r;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        for(int i=1; i<=q; i++)
        {
            int x, y;
            cin >> x >> y;
            l.push_back(x-1);
            r.push_back(y-1);
        }
        for(int i=0; i<n-1; i++)
        {
            int max1 = max(a[i],max(a[i+1],b[i]));
            if (max1==a[i+1])
            {
                a[i]=a[i+1];
            }
            else if (max1==b[i])
            {
                a[i]=b[i];
            }
        }

    }
}