#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int i=0;
        while(pow(2,i)<=n)
        {
            i++;
        }
        cout << static_cast<int>(pow(2,i-1))-1 << endl;
    }
}