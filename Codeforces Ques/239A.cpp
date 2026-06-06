#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int y, k, n;
    cin >> y >> k >> n;
    long long p = k - y%k;
    long long val = n-y;
    vector<long long int> a;
    for(long long i = p; i<=val; i+=k)
    {
        a.push_back(i);
    }
    if (a.size()==0)
    {
        cout << -1 << endl;
    }
    else
    {
        for(int i=0; i<a.size(); i++)
        {
            cout << a[i] << " " ;
        }
    }
    return 0;
}