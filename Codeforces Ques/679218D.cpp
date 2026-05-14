#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p;
    long long int sum=0;
    for(int i=0; i<n; i++)
    {
        long long int x;
        cin >> x;
        if (x==1 || x==2 || x==4)
        {
            p.push_back(-1);
        }
        else if ((x%8==0 || x%8==6) && (x!=6))
        {
            p.push_back(2);
        } 
        else
        {
            p.push_back(1);
        }
    }
    for(int i=0; i<n; i++)
    {
        sum+= ((i+1)*(p[i]));
    }
    cout << sum << endl;
}