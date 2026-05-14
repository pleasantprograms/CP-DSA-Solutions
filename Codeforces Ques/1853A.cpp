#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n ;
        int md = INT_MAX;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int i=0; i<n-1; i++)
        {
            md=min(md,a[i+1]-a[i]);
        }

        if (md<0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << md/2 + 1 << endl;
        }
    }
}