#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n;

    while(t--)
    {
        int hao=0;
        int alex=0;

        int m1, m2, m3 = 0;
        cin >> n;

        if (n<=2)
        {
            cout << 0 << endl;
            return 0;
        }
        while (n>2)
        {
            if (n%3==0)
            {
             m1 = n/3;
             m2 = n/3;
             m3 = n/3;
            }
            else if (n%3==1)
            {
             m1 = n/3;
             m2 = n/3;
             m3 = n/3+1;
            }
            else
            {
             m1 = n/3;
             m2 = n/3;
             m3 = n/3+2;
            }

            hao = hao + m1;
            alex = alex + m2;

            n = m3;
            if (n<=2)
            {
                alex = alex + m3;
                cout << hao << endl;
            }
        }
    }
    return 0;
}