#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v;

        for (int i=1; i<=n; i++)
        {
            string x;
            cin >> x;
            v.push_back(x);
        }

        string s = v[0];

        for (int i=1; i<n; i++)
        {
            if (s+v[i]>v[i]+s)
            {
                s = v[i] + s;
            }
            else
            {
                s = s + v[i];
            }
        }
        cout << s << endl;
    }
}