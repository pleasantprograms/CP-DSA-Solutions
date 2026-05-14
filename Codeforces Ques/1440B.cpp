#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> p(n*k);
        for(int i=0; i<n*k; i++)
        {
            cin >> p[i] ;
        }
        if (n>=3)
        {
            int z = n/2 + 1;
            long long int ans = 0;
            int count = 0;
            for(int i=n*k-1; i>=0; i--)
            {
                if ((n*k-i)%z==0)
                {
                    ans+=p[i];
                    count++;
                }
                if (count==k)
                {
                    break;
                }
            }
            cout << ans << endl;
        }
        else if (n==2)
        {
            long long int ans = 0;
            for(int i=0; i<n*k; i++)
            {
                if (i%2==0)
                {
                    ans+=p[i];
                }
            }
            cout << ans << endl;
        }
        else
        {
            long long int ans = 0;
            for(int i=0; i<n*k; i++)
            {
                ans+=p[i];
            }
            cout << ans << endl;
        }
    }
}
