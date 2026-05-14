#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w ;
    cin >> k >> n >> w ;

    if ((w*(w+1)*k)/2 > n)
    {
        cout << ((w*(w+1)*k)/2 - n) << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}