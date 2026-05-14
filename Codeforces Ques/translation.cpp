#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string t;
    cin >> s >> t ;

    if (s.size()!=t.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i=0; i<s.size(); i++)
    {
        if (s[i]!=t[s.size()-i-1])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}