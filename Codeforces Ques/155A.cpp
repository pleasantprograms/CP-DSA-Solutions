#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max1 = INT_MIN;
    int min1 = INT_MAX;
    int count=0;

    for (int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
        int tempmax=max1;
        int tempmin=min1;
        min1 = min(min1,x);
        max1 = max(max1,x);

        if (tempmax!=max1 || tempmin!=min1)
        {
            count++;
        }
    }
    cout << count-1 << endl;
}