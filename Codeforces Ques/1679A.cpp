#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        if (n%2!=0 || n<=3)
        {
            cout << -1 << endl;
        }
        else
        {
            long long int amax;
            long long int amin;

            if (n%4==0)
            {
                amax = n/4;
            }
            else if (n%4==2)
            {
                amax = (n-6)/4 + 1;
            }

            if (n%6==0)
            {
                amin = n/6;
            }
            else if (n%6==2)
            {
                amin = (n-8)/6 + 2;
            }
            else 
            {
                amin = (n-4)/6 + 1;
            }
            cout << amin << " " << amax << endl;
        }
    }
}