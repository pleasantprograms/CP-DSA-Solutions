#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> p(7);
        for(int i=0; i<7; i++)
        {
            cin >> p[i];
        }
        sort(p.begin(),p.end());
        int ans=0;
        for(int i=0; i<7; i++)
        {
            if (i!=6)
            {
                ans-=p[i];
            }
            else
            {
                ans+=p[i];
            }
        }
        cout << ans << endl;
    }
}