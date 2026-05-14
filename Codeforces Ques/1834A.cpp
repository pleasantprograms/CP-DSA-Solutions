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
        int a=0; 
        int b=0;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            if (x==1)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        int count = 0;
        while(b>a || b%2!=0)
        {
            count++;
            b--;
            a++;
        }
        cout << count << endl;
    }
    return 0;
}