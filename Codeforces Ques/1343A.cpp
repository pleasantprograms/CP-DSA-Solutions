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

        int sum = 1;
        for (int i=1; i<=n; i++)
        {
            sum+=pow(2,i);
            if (n%sum==0)
            {
                cout << n/sum << endl;
                break;
            }
        }
    }
}