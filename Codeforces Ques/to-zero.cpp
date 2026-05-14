#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;
    while (t--)
    {
        int n, k;
        cin >> n >> k ;

        if (n%2!=0) //n -- odd
        {
            if ((n-k)%(k-1)==0)
            {
                cout << (n-k)/(k-1) + 1 << endl;
            }
            else
            {
                cout << (n-k)/(k-1) + 2 << endl;
            }
        }
        else //n -- even
        {
            if (n%(k-1)==0)
            {
                cout << n/(k-1) << endl;
            }
            else
            {
                cout << n/(k-1) + 1 << endl; 
            }
        }
    }
}