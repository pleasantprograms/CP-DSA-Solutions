#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        string a, b, c;
        cin >> n >> a >> m >> b >> c ;

        for (int i=0; i<m; i++)
        {
            if (c[i]=='V')
            {
                char ch = b[i];
                a = ch + a;
            }
            else
            {
                char ch = b[i];
                a = a + ch;
            }
        }
        cout << a << endl;
    }
}