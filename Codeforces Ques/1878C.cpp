#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, k, x;
        cin >> n >> k >> x;
        long long int minS = (k*(k+1))/2;
        long long int maxS = ((n*(n+1))/2) - (((n-k)*(n-k+1))/2);

        if (x>=minS && x<=maxS)
        {
            cout << "YES" << endl;
        } 
        else
        {
            cout << "NO" << endl;
        }
    }
}