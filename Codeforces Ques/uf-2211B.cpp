#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        vector<int> ans(x+y);
        if (abs(x-y)%2!=0)
        {
            cout << 1 << endl;
            for (int i=0; i<x; i++)
            {
                ans[i]=1;
            }
            for(int i=x; i<x+y; i++)
            {
                ans[i]=-1;
            }
            for(int i=0; i<x+y; i++)
            {
                cout << ans[i] << " " ;
            }
            cout << endl;
        }
        else if (x==y)
        {
            cout << 1 << endl;
            for (int i=0; i<x; i++)
            {
                ans[i]=1;
            }
            for(int i=x; i<x+y; i++)
            {
                ans[i]=-1;
            }
            for(int i=0; i<x+y; i++)
            {
                cout << ans[i] << " " ;
            }
            cout << endl;
        }
        else
        {
            cout << 2 << endl;
            for (int i=0; i<x; i++)
            {
                ans[i]=1;
            }
            for(int i=x; i<x+y; i++)
            {
                ans[i]=-1;
            }
            for(int i=0; i<x+y; i++)
            {
                cout << ans[i] << " " ;
            }
            cout << endl;
        }
    }
}
