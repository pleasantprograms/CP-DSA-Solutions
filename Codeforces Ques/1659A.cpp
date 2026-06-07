#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int k = r/b;
        string s = "";
        for(int i=1; i<=k; i++)
        {
            s += 'R';
        }
        s+='B';
        string temp = s;
        for(int i=1; i<b; i++)
        {
            s+=temp;
        }
        int p = r-k*b;
        for(int i=1; i<=p; i++)
        {
            s += 'R';
        }
        cout << s << endl; 
    }
}