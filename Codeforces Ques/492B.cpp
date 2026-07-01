#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    
    bool p = false; bool q = false; bool r = false;
    
    if ((a[0]==0) && (a[n-1]==l)) p =true;
    else if (a[0]==0) q = true;
    else if (a[n-1]==l) r = true;
    
    double ans = INT_MIN;

    if (p==true)
    {
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans,(a[i+1]-a[i])/2.0);
        }
    }
    else if (q==true)
    {
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans,(a[i+1]-a[i])/2.0);
        }
        ans = max(ans,static_cast<double>(l-a[n-1]));
    }
    else if (r==true)
    {
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans,(a[i+1]-a[i])/2.0);
        }
        ans = max(ans,static_cast<double>(a[0]));
    }
    else
    {
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans,(a[i+1]-a[i])/2.0);
        }
        ans = max(ans,static_cast<double>(l-a[n-1]));
        ans = max(ans,static_cast<double>(a[0]));
    }
    cout << fixed << setprecision(10) << ans << endl;
}