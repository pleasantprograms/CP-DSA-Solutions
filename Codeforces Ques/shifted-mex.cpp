#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        vector<int> a;
        int p=INT_MAX;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            p=min(x,p);
        }
        for(int i=0; i<n; i++)
        {
            a[i]-=p;
        }
        sort(a.begin(),a.end());
    }
}