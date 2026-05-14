#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> p;
    int q = INT_MIN;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        p.push_back(x);
        q=max(q,x);
    }
    int ans=0;
    for(int i=0; i<n; i++)
    {
        ans+=q-p[i];
    }
    cout << ans << endl;
}