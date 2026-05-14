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
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
        }
        int ans = 0;
        bool q = true;
        for (int i=n-2; i>=0; i--)
        {
            while(p[i]>=p[i+1])
            {
                if (p[i]==0)
                {
                    q = false;
                    break;
                }
                p[i]/=2;
                ans++;
            }
            if (!q)
            {
                break;
            }
        }
        cout << (q ? ans : -1) << endl;
    }
}