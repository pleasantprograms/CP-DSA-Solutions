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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int l = 0;
        int r = n-1;

        while(l<n && r>=0 && k!=0)
        {
            if (a[l]<b[r]) 
            {
                swap(a[l],b[r]);
                l++;
                r--;
                k--;
            }
            else
            {
                break;
            }
        }
        int sum = 0;
        for(int i=0; i<n; i++) sum+=a[i];

        cout << sum << endl;
    }
}