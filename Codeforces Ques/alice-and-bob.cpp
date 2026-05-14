#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, p;
        cin >> n >> p;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int alice=0;
        int bob=0;

        int a=n/2;
        int b=n/2 - 1;

        for(int i=b; i<=a; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (abs(v[j]-p)>abs(v[j]-i))
                {
                    bob++;
                }
                else
                {
                    alice++;
                }
            }
            if (bob>alice)
            {
                cout << i << endl;
                break;
            }
        }


    }
}