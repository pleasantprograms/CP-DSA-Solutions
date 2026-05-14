#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int a, b;
        cin >> a >> b ;

        if (a%b==0)
        {
            cout << 0 << endl;
        }
        else if (a<b)
        {
            cout << b-a << endl;
        }
        else
        {
            long long int n = a/b;
            cout << (b*(n+1))-a << endl;
        }
    }
}