#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int c0=0;
        int c1=0;
        int c2=0;
        int c3=0;
        int c5=0;
        int count=0;
        int a = 5;


        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if (c0>=3 && c1>=1 && c2>=2 && c3>=1 && c5>=1)
            {
                cout << count << endl;
                a=6;
                break;
            }
            else if (x==0)
            {
                c0++;
                count++;
            }
            else if (x==1)
            {
                c1++;
                count++;
            }
            else if (x==2)
            {
                c2++;
                count++;
            }
            else if (x==3)
            {
                c3++;
                count++;
            }
            else if (x==5)
            {
                c5++;
                count++;
            }
            else
            {
                count++;
            }
        }

        if (a==5)
        {
            cout << 0 << endl;
        }
    }
}