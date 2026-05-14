#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> vec;

    for (int i=1; i<=c; i++)
    {
        vec.push_back(a*i);
        vec.push_back(b*i);
    }
    
    sort(vec.begin(),vec.end());
    int ans = vec[c];

    if (ans%a==0 && ans%b!=0)
    {
        while (ans>=0)
        {
            cout << ans << " " ;
            ans-=a;
        }
    }
    else if (ans%a!=0 && ans%b==0)
    {
        while (ans>=0)
        {
            cout << ans << " " ;
            ans-=b;
        }
    }
    else
    {
        while (ans>=0)
        {
            cout << ans << " " ;
            ans-=lcm(a,b);
        }
    }
}