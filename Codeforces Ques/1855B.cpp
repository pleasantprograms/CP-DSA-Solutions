#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        int count=1;
        while(n%count==0)
        {
            count++;
        }
        cout << count-1 << endl;
    }
}
