#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        p = min(p, abs(x));
    }
    cout << p << endl;
}