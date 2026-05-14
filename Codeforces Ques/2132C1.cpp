#include <bits/stdc++.h>
using namespace std;

int nearestpow(int n)
{
    long long int power = 1;
    int count=0;
    while(power<=n)
    {
        power*=3;
        count++;
    }
    return count-1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        long long int coins=0;

        while (n>0)
        {
            if (nearestpow(n)==0)
            {
                coins+=3;
            }
            else
            {
                coins+=(pow(3,nearestpow(n)+1)  + 0LL + (nearestpow(n) * (pow(3,(nearestpow(n)-1)))));
            }
            n-=pow(3,nearestpow(n));
        }
        cout << coins << endl;
    }
}