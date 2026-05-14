#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    sort(p.begin(), p.end());
    int ans = 0;
    int count = 0;
    for (int i = n-1; i>=0; i--)
    {
        ans += (d / p[i]) + 1;
        if (ans <= n)
        {
            count++;
        }
        else break;
    }
    cout << count << endl;
}