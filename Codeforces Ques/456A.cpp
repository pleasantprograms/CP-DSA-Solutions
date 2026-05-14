#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> p(n);
    for(int i=0; i<n; i++)
    {
        cin >> p[i].first >> p[i].second ;
    }
    sort(p.begin(),p.end());
    for(int i=0; i<n-1; i++)
    {
        if (p[i].second>p[i+1].second)
        {
            cout << "Happy Alex" << endl;
            return 0; 
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}