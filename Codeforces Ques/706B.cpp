#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin >> p[i];
    
    int q; 
    cin >> q;
    vector<int> m(q);
    for(int i=0; i<q; i++) cin >> m[i];
    
    sort(p.begin(),p.end());
    
    for(int i=0; i<q; i++)
    {
        auto idx = upper_bound(p.begin(),p.end(),m[i]);
        cout << idx-p.begin() << endl;
    }
}