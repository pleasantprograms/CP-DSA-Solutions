#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            mpp[p[i]]++;
        }
        bool ans = true;
        for (auto p : mpp)
        {
            if (p.second <= 1)
            {
                ans = false;
                break;
            }
        }
        if (ans == false)
            cout << -1 << endl;
        else
        {
            int curridx = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (p[i] == p[i + 1])
                    cout << i + 2 << " ";
                else
                {
                    cout << curridx + 1 << " ";
                    curridx = i + 1;
                }
            }
            cout << curridx + 1 << " ";
            cout << endl;
        }
    }
}