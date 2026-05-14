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
        string s;
        long long int btd=0;
        cin >> s;

        for (int i=n-1; i>=0; i--)
        {
            if (s[i]=='1')
            {
                btd = btd + 0LL + (pow(2,n-i-1));
            }
        }
        cout << btd << endl;
    }
}
