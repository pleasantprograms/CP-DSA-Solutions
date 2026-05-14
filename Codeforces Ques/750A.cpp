#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int t = 240-k;
    int i = 1;
    while (i<=n)
    {
        int a = (5*(i)*(i+1))/2;
        if (a<=t)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    cout << i-1 << endl;
}