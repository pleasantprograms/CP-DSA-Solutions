#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int oddc = 0;
        int sum = 0;
        int minel = INT_MAX;
        for(int i=0; i<n; i++)
        {
            for(int i=0; i<m; i++)
            {
                int x;
                cin >> x;
                sum+=abs(x);
                if (x<=0) oddc++;
                minel = min(minel,abs(x));
            }
        }
        if (oddc%2==0) cout << sum << endl;
        else cout << sum-2*minel << endl;
    }
}