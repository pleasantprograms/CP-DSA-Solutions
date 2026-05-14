#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    int c0=0;
    int c1=0;

    for (int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            c1=0;
            c0++;
        }

        if(s[i]=='1')
        {
            c0=0;
            c1++;
        }

        if (c0==7)
        {
            cout << "YES" << endl;
            return 0;
        }
        if (c1==7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}