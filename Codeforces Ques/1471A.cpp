#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> p(n);
        long long int maxans = 0;
        long long int minans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            minans += p[i];
        }
        if (minans % x == 0)
        {
            minans /= x;
        }
        else
        {
            minans = minans / x + 1;
        }

        for (int i = 0; i < n; i++)
        {
            if (p[i] % x == 0)
            {
                maxans += (p[i] / x);
            }
            else
            {
                maxans += ((p[i]/x) + 1);
            }
        }
        cout << minans << " " << maxans << endl;
    }
}