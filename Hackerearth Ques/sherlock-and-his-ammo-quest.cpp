#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b)
{
    if (a.second!=b.second) return a.second>b.second;
    else return a.first<b.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string,int>> v(n);
    for(int i=0; i<n; i++)
    {
        string x; int m;
        cin >> x >> m;
        v[i].first = x;
        v[i].second = m;
    }
    sort(v.begin(),v.end(),cmp);
	for(auto k: v)
	{
		cout << k.first << " " << k.second << endl;
	}
}