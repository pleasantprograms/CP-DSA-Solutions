#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> p[i] ;
        sum+=p[i];
    }
    sort(p.begin(),p.end());
    int a = 0;
    for(int i=n-1; i>=0; i--)
    {
        a += p[i];
        if (sum - a < a)
        {
            cout << n-i << endl;
            return 0;
        }
    }
    return 0;
}