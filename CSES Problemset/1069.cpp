#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    char temp = s[0];
    int count=1;
    int m = 1;
    for(int i=1; i<n; i++)
    {
        if (temp==s[i]) 
        {
            count++; 
        }
        else 
        {
            count=1;
            temp = s[i];
        }
        m = max(m,count);
    }
    cout << m << endl;
}