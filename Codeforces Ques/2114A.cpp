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

        int st = 0;
        int end = 99;
        int a = 0;
        while(st<=end)
        {
            if (n==pow(st+end,2))
            {
                cout << st << " " << end << endl;
                a=1;
                break;
            }
            else if (n>pow(st+end,2))
            {
                st++;
            }
            else
            {
                end--;
            }
        }
        
        if (a==0)
        {
            cout << -1 << endl;
        }
    }
}