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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        vector<int> ans;
        int ldiff = INT_MAX;
        int idx1 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int temp = ldiff;
            int diff = v[i + 1] - v[i];
            ldiff = min(ldiff, diff);

            if (diff < temp)
            {
                idx1 = i;
            }
            else if (diff == temp)
            {
                idx1 = min(idx1, i);
            }
        }
        ans.push_back(v[idx1]);
        for (int i = idx1 + 2; i < n; i++)
            ans.push_back(v[i]);
        for (int i = 0; i <= idx1 - 1; i++)
            ans.push_back(v[i]);
        if (n != 1)
            ans.push_back(v[idx1 + 1]);

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";

        cout << endl;
    }
}
