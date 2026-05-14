#include <bits/stdc++.h>
using namespace std;

int main() //b=a-x
{
    int n ;
    cin >> n;
    vector<int> a, b, x;
    for (int i=0; i<n; i++)
    {
        int p;
        cin >> p;
        b.push_back(p);
    }
    x.push_back(0);
    for(int i=0; i<n; i++)
    {
        a.push_back(b[i]+x[i]);
        x.push_back(max(x[i],a[i]));
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " " ;
    }  
}