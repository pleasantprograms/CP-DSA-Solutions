#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> p;
        for(int i=0; i<n; i++) 
        {
            int x;
            cin >> x;
            if (x%k==0) p.push_back({k,i+1});
            else p.push_back({x%k,i+1});
        }
        sort(p.begin(), p.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first) {
            return a.first > b.first; // Descending order for first element
        }
        return a.second < b.second; // Ascending order for second element
    });
        for(int i=0; i<n; i++)
        {
            cout << p[i].second << " ";
        }
        cout << endl;
    }
}