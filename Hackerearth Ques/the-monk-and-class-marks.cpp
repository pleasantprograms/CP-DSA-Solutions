// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n;
// 	cin >> n;
// 	map<int,multiset<string>> p;
// 	for(int i=0; i<n; i++)
// 	{
// 		string s;
// 		int x;
// 		cin >> s >> x;
// 		p[x].insert(s);
// 	}
// 	for (auto it = p.rbegin(); it!=p.rend(); it++)
//     {
//         auto &marks = (*it).first;
// 		auto &list = (*it).second;
// 		for(auto &el: list) cout << el << " " << marks << endl;
//     }
// }

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
		string s;
		int m;
		cin >> s >> m;
		v[i].first = s;
		v[i].second = m;
	}
	sort(v.begin(),v.end(),cmp);
	for(auto k: v)
	{
		cout << k.first << " " << k.second << endl;
	}

}