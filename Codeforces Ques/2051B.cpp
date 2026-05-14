#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c ;
        int sum = a+b+c;
        int p = n/sum;

        if (n==p*sum)
        {
            cout << 3*p << endl;
        }
        else if (n<=p*sum+a)
        {
            cout << 3*p+1 << endl;
        }
        else if (n<=p*sum+a+b)
        {
            cout << 3*p+2 << endl;
        }
        else 
        {
            cout << 3*(p+1) << endl;
        }
    }
}