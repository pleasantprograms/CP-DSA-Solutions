#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int,int> mpp;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    vector<int> dis(n);
    for(int i=n-1; i>=0; i--)
    {
        mpp[a[i]]++;
        dis[i] = mpp.size();
    }
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        cout << dis[x-1] << endl;
    }
}