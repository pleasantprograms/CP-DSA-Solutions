#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> p(n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> p[i];
        sum+=p[i];
    }
    vector<pair<int,int>> a;
    a.push_back({0,sum});
    int mind = INT_MAX;
    for(int i=0; i<n; i++)
    {
        sum-=p[i];
        a.push_back({a[i].first+p[i],sum});
    }
    int ansl = 0;
    int ansr = 0;
    for(int i=0; i<a.size(); i++)
    {
        int diff = abs(a[i].second - a[i].first);
        mind = min(mind,diff);
        if (mind == diff)
        {
            ansl = i;
            ansr = n-i;
        }
    }

    cout << ansl << " " << ansr << endl;
}