#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string,int> data;
    for(int i=0; i<n; i++)
    {
        string x;
        cin >> x;
        data[x]++;
        if (data[x]==1)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << x << data[x]-1 << endl;
        }
    }
    return 0;
}