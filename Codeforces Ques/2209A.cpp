#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, c, k;
        cin >> n >> c >> k;
        vector<int> p;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
        } 
        sort(p.begin(),p.end());
        for(int i=0; i<n; i++)
        {
            if (p[i]<=c)
            {
                if (k>=c-p[i])
                {
                    k-=(c-p[i]);
                    c+=c;
                }
                else
                {
                    if (k>=0)
                    {
                        c+=(k+p[i]);
                        k-=(k);
                    }
                    else
                    {
                        c+=p[i];
                    }
                }
            }
        }
        cout << c << endl;
    }
}
