#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p, q;
    cin >> p;
    unordered_map<int,int> mpp;
    for(int i=0; i<p; i++)
    {
        int x;
        cin >> x;
        mpp[x]++;
    }
    cin >> q;
    for(int i=0; i<q; i++)
    {
        int x;
        cin >> x;
        mpp[x]++;
    }
    if (mpp.size()==n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}