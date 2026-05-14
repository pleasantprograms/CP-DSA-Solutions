#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int count=0;

    if (n<26)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i=0; i<n; i++)
    {
        if (s[i]>=65 && s[i]<=90)
        {
            s[i]+=32;
        }
    }

    for (char ch='a'; ch<='z'; ch++)
    {
        for (int i=0; i<n; i++)
        {
            if(s[i]==ch)
            {
                count++;
                break;
            }
        }
    }
    if (count==26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}