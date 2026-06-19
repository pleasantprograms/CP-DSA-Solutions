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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int last = a[0];
        for(int i=1; i<n; i++)
        {
            if (a[i]>=last) 
            {
                a[i]=last;
            }
            else
            {
                last = a[i];
            }
        }
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
        }
        cout << sum << endl;
    }
}