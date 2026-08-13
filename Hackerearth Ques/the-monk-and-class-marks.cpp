#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	map<int,multiset<string>> p;
	for(int i=0; i<n; i++)
	{
		string s;
		int x;
		cin >> s >> x;
		p[x].insert(s);
	}
	for (auto it = p.rbegin(); it!=p.rend(); it++)
    {
        auto &marks = (*it).first;
		auto &list = (*it).second;
		for(auto &el: list) cout << el << " " << marks << endl;
    }
}