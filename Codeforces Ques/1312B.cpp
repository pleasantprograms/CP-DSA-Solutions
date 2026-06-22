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
        vector<int> p(n);
        for(int i=0; i<n; i++)
        {
            cin >> p[i];
        }
        sort(p.begin(),p.end(),greater<int>());
        for(int i=0; i<n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    return 0;
}