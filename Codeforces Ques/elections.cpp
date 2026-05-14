#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c ;

        if (a==b && b==c)
        {
            cout << 1 << " " << 1 << " " << 1 << endl;
        }
        else if (a==b && max(a,max(b,c))==a)
        {
            cout << 1 << " " << 1 << " " << a-c+1+0LL << endl;
        }
        else if (b==c && max(a,max(b,c))==b)
        {
            cout << b-a+1+0LL << " " << 1 << " " << 1 << endl;
        }
        else if (a==c && max(a,max(b,c))==a)
        {
            cout << 1 << " " << c-b+1+0LL << " " << 1 << endl;
        }
        else if (max(a,max(b,c))==a)
        {
            cout << 0 << " " << max(a,max(b,c)) - b + 1 +0LL << " " << max(a,max(b,c)) - c + 1 +0LL << endl;
        }
        else if (max(a,max(b,c))==b)
        {
            cout << max(a,max(b,c)) - a + 1 + 0LL << " " << 0 << " " << max(a,max(b,c)) - c + 1 + 0LL << endl;
        }
        else
        {
            cout << max(a,max(b,c)) - a + 1 + 0LL << " " << max(a,max(b,c)) - b + 1 + 0LL << " " << 0 << endl;   
        }
    }
}