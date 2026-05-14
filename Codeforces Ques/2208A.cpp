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
        int p[n][n];
        int k = n*n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> p[i][j];
            }
        }
        vector<int> count;
        int sum=0;
        if (n==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            for(int a=1; a<=k; a++)
            {
                int c=0;
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if (p[i][j]==a)
                        {
                            c++;
                        }
                    }
                }
                count.push_back(c);
                if (sum==n*n)
                {
                    break;
                }
            }
            int mc=INT_MIN;

            for(int i=0; i<n*n; i++)
            {
                mc = max(mc,count[i]);
            }

            if (mc<=n*(n-1))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}