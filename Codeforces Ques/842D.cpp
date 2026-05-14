#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> p(n), x(m);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x[i];
    }
    unordered_map<int, int> mpp;
    int maxel = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        p[i] = p[i] ^ x;
        mpp[p[i]]++;
        maxel = max(maxel, p[i]);
    }
    int ans = 1;
    for (int i = 0; i <= maxel; i++)
    {
        if (mpp[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}