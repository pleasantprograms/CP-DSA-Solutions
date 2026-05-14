#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int l = 0; int r = 0;
        int ml = INT_MIN; int mr = INT_MIN;
        for(int i=1; i<=n; i++)
        {
            char x;
            cin >> x;
            if (x=='<')
            {
                l++;
                ml = max(l,ml);
                r=0;

            }
            else
            {
                r++;
                mr  = max(r,mr);
                l=0;
            }
        }
        cout << max(ml,mr)+1 << endl;
    }
}