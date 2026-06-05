#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n == 2 || n == 3 )
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        vector<int> a(n, 0);
        for (int i = 0; i < n / 2; i++)
        {
            a[i] = (i + 1) * 2;
        }
        if (n % 2 == 0)
        {
            for (int i = n / 2; i < n; i++)
            {
                a[i] = a[i - n / 2] - 1;
            }
        }
        else
        {
            for (int i = n / 2; i < n - 1; i++)
            {
                a[i] = a[i - n / 2] - 1;
            }
            a[n - 1] = n;
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
}