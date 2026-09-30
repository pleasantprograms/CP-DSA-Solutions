#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i=0; i<n; i++) cin >> p[i];
        int st = 0;
        int end = n-1;
        bool isp = true;;
        while(st<=end)
        {
            if (p[st]!=p[end]) 
            {
                isp = false;
                break;
            }
            st++;
            end--;
        }
        if (isp)
        {
            cout << "YES" << endl;
            continue;
        }
        vector<int> x;
        vector<int> y;
        for(int i=0; i<n; i++) if (p[i]!=p[st]) x.push_back(p[i]);
        for(int i=0; i<n; i++) if (p[i]!=p[end]) y.push_back(p[i]);

        bool isx = true, isy = true;
        for(int i=0; i<x.size(); i++)
        {
            if (x[i]!=x[x.size()-i-1])
            {
                isx = false;
                break;
            }
        }
        for(int i=0; i<y.size(); i++)
        {
            if (y[i]!=y[y.size()-i-1])
            {
                isy = false;
                break;
            }
        }
        if (isx||isy) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}