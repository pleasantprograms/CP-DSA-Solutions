#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<char> p;
        char curr = '!';
        for(int i=0; i<s.length(); i++)
        {
            if (curr=='(' && s[i]==')' && !p.empty()) p.pop();
            else if (curr=='[' && s[i]==']' && !p.empty()) p.pop();
            else if (curr=='{' && s[i]=='}' && !p.empty()) p.pop();
            else p.push(s[i]);
            
            if (!p.empty()) curr = p.top();
        }
        if (p.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}