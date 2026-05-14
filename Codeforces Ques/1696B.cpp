#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int p = a[0];
        int x=-1; int y=-1; 
        bool k = false;
        bool w = false;
        for(int i=0; i<n ; i++)
        {
            if (a[i]!=0)
            {
                x = i;
                break;
            }
        }
        for(int i=n-1; i>=0 ; i--)
        {
            if (a[i]!=0)
            {
                y = i;
                break;
            }
        }
        if (x==-1 && y==-1)
        {
            cout << 0 << endl;
        }
        else if (x==y)
        {
            cout << 1 << endl;
        }
        else 
        {
            for(int i=x+1; i<y; i++)
            {
                if (a[i]==0)
                {
                    cout << 2 << endl;
                    k=true;
                    break;
                }
            }
            if (k==false)
            {
                cout << 1 << endl;
            }
        }
    }
}