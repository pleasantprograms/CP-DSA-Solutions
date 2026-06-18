#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> p;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({a,b});
    }
    sort(p.begin(),p.end());
    int last = p[0].second;
    bool k = true;
    for(int i=1; i<n; i++)
    {
        if (p[i].second < last)
        {
            last = p[i].first;
        }
        else 
        {
            last = p[i].second;
        }
    }
    cout << last << endl;
}