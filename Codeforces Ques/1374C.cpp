#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s; 
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if (s[i]=='(') st.push(s[i]);
            else if (st.empty()) cnt++;
            else st.pop();
        }
        cout << cnt << endl;
    }
}