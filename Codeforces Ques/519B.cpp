#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n-1), c(n-2);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n-1; i++) cin >> b[i];
    for(int i=0; i<n-2; i++) cin >> c[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    bool x= false; bool y = false;
    for(int i=0; i<n-1; i++)
    {
        if (a[i]!=b[i])
        {
            cout << a[i] << endl;
            x = true;
            break;
        }
    }
    if (!x) cout << a[n-1] << endl;

    for(int i=0; i<n-2; i++)
    {
        if (b[i]!=c[i])
        {
            cout << b[i] << endl;
            y = true;
            break;
        }
    }
    if (!y) cout << b[n-2] << endl;
}