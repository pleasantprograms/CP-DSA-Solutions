#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s ;
        string ans;

        for (int i=0; i<n; i++)
        {
            if (!ans.empty() && ans.back()!=s[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        cout << ans.size() << endl;
    }
}