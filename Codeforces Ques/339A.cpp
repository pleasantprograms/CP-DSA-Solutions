#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c1=0;
    int c2=0;
    int c3=0;

    for(int i=0; i<s.size(); i+=2)
    {
        if (s[i]=='1')
        {
            c1++;
        }
        else if (s[i]=='2')
        {
            c2++;
        }
        else
        {
            c3++;
        }
    }
    int i=0;
    while (c1--)
    {
        s[i]='1';
        i+=2;
    }
    while(c2--)
    {
        s[i]='2';
        i+=2;
    }
    while(c3--)
    {
        s[i]='3';
        i+=2;
    }
    cout << s << endl;
}