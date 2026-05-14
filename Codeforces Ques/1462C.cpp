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
        if (n==1 || n==2 || n==3 || n==4 || n==5 || n==6 || n==7 || n==8 || n==9)
        {
            cout << n << endl;
        }
        else if (n==46 || n==47 || n==48 || n==49 || n==50)
        {
            cout << -1 << endl;
        }
        else
        {
            long long int ans=0;
            int i=9;
            int p=0;
            while(n>i)
            {
                n-=i;
                ans+=i*pow(10,p);
                i--;
                p++;
            }
            ans+=n*pow(10,p);
            cout << ans << endl;
        }
    }
}