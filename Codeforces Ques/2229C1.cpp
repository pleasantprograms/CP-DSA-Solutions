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
        for(int i=0; i<n; i++) cin >> a[i];
        int cnt = 0;
        vector<int> ans;
        for(int i=0; i<n-1; i++)
        {
            if ((a[i]>0 && a[i+1]<0) || (a[i]<0 && a[i+1]>0)) 
            {
                cnt++;
                ans.push_back(i+1);
            }
        }
        if (a[n-1]>0)
        {
            cnt++;
            ans.push_back(n);
        }
        cout << cnt << endl;
        for(int i=ans.size()-1; i>=0; i--)
        {
            cout << ans[i] << " " ;
        }
        cout << endl;
    }
}