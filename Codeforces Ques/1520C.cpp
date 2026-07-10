#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        if (n==2) cout << -1 << endl;
        else
        {
            for(int i=1; i<=n*n; i+=2)
            {
                cout << i << " ";
                cnt++;
                if (cnt==n)
                {
                    cnt=0;
                    cout << endl;
                }
            }
            for(int i=2; i<=n*n; i+=2)
            {
                cout << i << " ";
                cnt++;
                if (cnt==n)
                {
                    cnt=0;
                    cout << endl;
                }
            }
        }
    }
}
