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
        int sum=0;
        int b=0;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            if (sum==a[i])
            {
                cout << "NO" << endl;
                b=1;
                break;
            }
            sum+=a[i];
        }
        if (b==0)
        {
            cout << "YES" << endl;
            swap(a[0],a[n-1]);
            for(int i=0; i<n; i++)
            {
                cout << a[i] << " " ;
            }
        }
    }
}