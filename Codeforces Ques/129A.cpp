#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }
    if (sum % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (p[i] % 2 == 0)
            {
                ans++;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (p[i] % 2 != 0)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}