#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool ans = false;
    for(int i=0; i<n-1; i++)
    {
        if (s[i]>s[i+1])
        {
            ans = true;
            cout << "YES" << endl;
            cout << i+1 << " " << i+2 << endl;
            break;
        }
    }
    if (ans==false)
    {
        cout << "NO" << endl;
    }
    return 0;
}