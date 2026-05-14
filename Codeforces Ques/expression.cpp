#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int d = a+b+c;
    int e = a*b*c;
    int f = (a+b)*c;
    int g = a*(b+c);
    int h = (a*b)+c;
    int i = a+(b*c);

    int ans = max(d,max(e,max(f,max(g,max(h,i)))));
    cout << ans << endl;
}