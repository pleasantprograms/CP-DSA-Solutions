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
        vector<long long int> p;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            int cmin=0;
            int cmax=0;
            for(int j=i+1; j<n; j++)
            {
                if (p[i]>p[j])
                {
                    cmin++;
                }
                else if (p[j]>p[i])
                {
                    cmax++;
                }                
            }
            ans.push_back(max(cmin,cmax));
        }
        for(int i=0; i<n; i++)
        {
            cout << ans[i] << " " ;
        }
        cout << endl;
    }
}