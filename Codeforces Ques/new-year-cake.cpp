#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        vector<int> order;
        if (min(a,b)==a)
        {
            a-=1;
            order.push_back(1);
        }
        else
        {
            b-=1;
            order.push_back(2);
        }
        int i=1;
        while (a>=0 && b>=0)
        {
            if (order[i-1]==1)
            {
                b-=pow(2,i);
                order.push_back(2);
            }
            else
            {
                a-=pow(2,i);
                order.push_back(1);
            }
            i++;
        }
        cout << i-1 << endl;
    }
}