#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    if ((a+b)%2==0)
    {
        cout << a-((a+b)/2) << endl;
    }
    else cout << -1 << endl;
}