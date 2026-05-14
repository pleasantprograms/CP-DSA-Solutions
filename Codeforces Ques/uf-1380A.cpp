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
        vector<int> p;
        int ma = INT_MIN;
        int maxidx,minidx,max2idx,min2idx;
        int ma2 = INT_MIN;
        int mi = INT_MAX;
        int mi2 = INT_MAX;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
            ma = max(ma,x);
            mi = min(mi,x);
            if (ma==x)
            {
                maxidx=i;
            }
            if (mi==x)
            {
                maxidx=i;
            }
        }
        for(int i=0; i<n; i++)
        {
            if (p[i]!=ma)
            {
                ma2 = max(ma2,p[i]);
                max2idx = i+1;
            }
            if (p[i]!=mi)
            {
                mi2 = min(mi2,p[i]);
                min2idx = i+1;
            }
        }
        if (ma==mi)
        {
            cout << "NO" << endl;
        }
        else if(ma2==ma && mi2!=ma2)
        {
            cout << "YES" << endl;
            cout << 
        }
    }
    return 0;
}