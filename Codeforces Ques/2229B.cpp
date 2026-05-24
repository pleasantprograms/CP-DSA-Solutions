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
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        for(int i=0; i<n; i++)
        {
            if (a[i]>b[i])
            {
                int temp = b[i];
                b[i] = a[i];
                a[i] = temp;
            }
        }
        int amax = INT_MIN;
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            amax = max(amax,a[i]);
        }
        for(int i=0; i<n; i++)
        {
            sum+=b[i];
        }
        cout << sum + amax + 0LL << endl;
    }
}