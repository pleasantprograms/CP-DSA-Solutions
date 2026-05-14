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
        vector<int> p;
        for(int i=0; i<n; i++)
        {
            p[i]=i+1;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if ((abs(p[j]-p[i]))%j==0)
                {
                    break;
                }
                else
                {
                    swap(p[j],p[j+1]);
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
}