#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 1;
        int b = n-1;
        for(int i=sqrt(n); i>=2; i--)
        {
            if (n%i==0)
            {
                a = n/i;
                b = n-a;
            }
        }
        cout << a << " " << b << endl;
    }
}