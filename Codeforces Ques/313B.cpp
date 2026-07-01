#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int m;
    cin >> m;
    vector<pair<int,int>> a;
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back({x,y});
    }

    int n = s.length();
    int cnt = 0;
    vector<int> pref;
    for(int i=0; i<n-1; i++)
    {
        if (s[i]==s[i+1])
        {
            cnt++;
        }
        pref.push_back(cnt);
    }

    for(int i=0; i<m; i++)
    {
        int ridx = a[i].second - 1;
        int lidx = a[i].first - 1;

        if (lidx==0)
        {
            cout << pref[ridx-1] << endl;
        }
        else
        {
            cout << pref[ridx-1] - pref[lidx-1] << endl;
        }
    }
}