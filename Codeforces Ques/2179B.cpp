#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> f;
        cin >> n;
        for (int i=1; i<=n; i++)
        {
            int x;
            cin >> x;

            f.push_back(x);
        }
        int sum = 0;
        for (int i=0; i<n-1; i++)
        {
            sum += abs(f[i]-f[i+1]);
        }
        int ans=sum;
        for (int i=0; i<n; i++)
        {
            int temp = sum;
            if (i==0)
            {
                temp = temp - abs(f[i]-f[i+1]);
            }
            else if (i==n-1)
            {
                temp = temp - abs(f[i-1]-f[i]);
            }
            else
            {
                temp = temp - abs(f[i]-f[i+1]) - abs(f[i]-f[i-1]) + abs(f[i-1]-f[i+1]) ;
            }
            ans = min(ans,temp);
        }
        cout << ans << endl;
    }
}