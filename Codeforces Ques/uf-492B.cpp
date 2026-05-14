#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; double l;
    cin >> n >> l;
    vector<double> p;
    for(int i=0; i<n; i++)
    {
        double x;
        cin >> x;
        p.push_back(x);
    }
    sort(p.begin(),p.end());
    if (p[0]==0)
    {
        double ans = -100.000000;
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans,(p[i+1]-p[i])/2);
        }
        if (p[n-1]==l)
        {
            cout << ans << endl;
            return 0;
        }
        else
        {
            ans = max(ans,l-p[n-1]);
            if (ans==l-p[n-1])
            {
                cout << ans << endl;
                return 0;
            }
            else
            {
                cout << ans << endl;
                return 0;
            }
        }
    }
    else
    {
        double ans = -100.000000;
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans,(p[i+1]-p[i])/2);
        }
        if (p[n-1]==l)
        {
            ans = max(ans,p[0]);
            if (ans==p[0])
            {
                cout << ans << endl;
                return 0;
            }
            else
            {
                cout << ans << endl;
                return 0;
            }
        }
        else
        {
            ans = max(ans,l-p[n-1]);
            ans = max(ans,p[0]);
            if (ans==l-p[n-1])
            {
                cout << ans << endl;
                return 0;
            }
            else if (ans==p[0])
            {
                cout << ans << endl;
                return 0;
            }
            else
            {
                cout << ans << endl;
                return 0;
            }
        }
    }
}