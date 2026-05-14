#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int ans = INT_MIN;
    int temp = 0;

    for (int i=1; i<=n; i++)
    {
        int a, b;
        cin >> a >> b ;

        temp = temp + b-a;
        ans = max(temp,ans);
    }
    cout << ans << endl;
    return 0;
}