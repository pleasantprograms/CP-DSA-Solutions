#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3 ;
    int min1 = min(x1,min(x2,x3));
    int max1 = max(x1,max(x2,x3));
    int d = INT_MAX;
    for (int i=min1; i<=max1; i++)
    {
        int d1 = abs(i-x1);
        int d2 = abs(i-x2);
        int d3 = abs(i-x3);
        
        d = min(d,d1+d2+d3);
    }
    cout << d << endl;
}