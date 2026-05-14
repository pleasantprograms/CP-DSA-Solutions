#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i=0; i<s.size(); i++)
    {
        if (s[i]=='H')
        {
            cout << "YES" << endl;
            return 0;
        }
        else if (s[i]=='Q')
        {
            cout << "YES" << endl;
            return 0;
        }
        else if (s[i]=='9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}