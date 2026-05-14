#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int n;
        cin >> n;
        int a=0;
        for(int i=1; pow(2,i)<=n; i++)
        {
            if (n==pow(2,i))
            {
                cout << "NO" << endl;
                a=1;
                break;
            }
        }
        if (a==0)
        {
            cout << "YES" << endl;
        }
    }
}