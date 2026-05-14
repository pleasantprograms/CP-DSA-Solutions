#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        int k = n;
        cin >> n;
        int c3=0;
        int c2=0;
        if (n%3!=0 && n!=1)
        {
            cout << -1 << endl;
        }
        else
        {
            while(n%3==0)
            {
                n/=3;
                c3++;
            }
            while(n%2==0)
            {
                n/=2;
                c2++;
            }
            if (c3>=c2)
            {
                int q=0;
                for(long long int i=1; i <= 1000000000000000000 ; i*=6)
                {
                    if (n*(static_cast<long long int>(pow(6,c3)))==i)
                    {
                        cout << c3-c2+c3 << endl;
                        q=1;
                        break;
                    }
                }
                if (q==0)
                {
                    cout << -1 << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}