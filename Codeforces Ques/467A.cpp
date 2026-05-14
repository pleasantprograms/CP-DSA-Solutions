#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count=0;
    for(int i=1; i<=n; i++)
    {
        int p, q;
        cin >> p >> q;

        if(q-p>=2)
        {
            count++;
        }
    }
    cout << count << endl;
}