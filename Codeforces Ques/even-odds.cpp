#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    // n = even -- odd nos = even nos = n/2 nos
    // n = odd  -- odd nos = even nos+1 = n/2+1 nos
    long long int sum=0;
    if (n%2==0)
    {
        if (k<=n/2) //odd 
        {
            sum=-1;
            for (int i=1; i<=k; ++i)
            {
                sum+=(2+0LL);
            }
        }
        else
        {
            sum=2;
            for (int i=1; i<k-n/2; ++i)
            {
                sum+=(2+0LL);
            }
        }
    }
    else
    {
        if (k<=n/2+1) //odd 
        {
            sum=-1;
            for (int i=1; i<=k; ++i)
            {
                sum+=(2+0LL);
            }
        }
        else
        {
            sum=2;
            for (int i=1; i<k-n/2-1; ++i)
            {
                sum+=(2+0LL);
            }
        }
    }
    cout << sum << endl;
}