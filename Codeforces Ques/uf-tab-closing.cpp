#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double a, b, n;
        cin >> a >> b >> n;
        double q = a/n;
        double p = min(b,q);
        int count=1;
        while(p>=q)
        {
            if (p==q)
            {
                break;
            }
            else
            {
                count++;
                a--;
                n--;
                q = a/n;
                p = min(b,q);
            }
        }
        cout << count << endl;
    }
}