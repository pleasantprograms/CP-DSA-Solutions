#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, a, b;
        cin >> l >> a >> b;
        int temp = a;
        int sum = a;
        int m = a;

        for (int i=1; i<=5000; i++)
        {
            sum = (sum + b)%l;
            m = max(m,sum);

            if (sum == temp)
            {
                cout << m << endl;
                break;
            }
        }
    }
}