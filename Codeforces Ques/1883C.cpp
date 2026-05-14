#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int,int> mpp;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            mpp[a[i]]++;
        }
        if (k==2)
        {
            if (mpp[2]==0 && mpp[4]==0 && mpp[6]==0 && mpp[8]==0 && mpp[10]==0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (k==3)
        {
            if (mpp[3]>0 || mpp[6]>0 || mpp[9]>0)
            {
                cout << 0 << endl;
            }
            else if (mpp[2]>0 || mpp[5]>0 || mpp[8]>0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else if (k==4)
        {
            int p = mpp[2]+mpp[6]+mpp[10];
            if (mpp[4]>0 || mpp[8]>0 || p>=2)
            {
                cout << 0 << endl;
            }
            else if (p==0 && mpp[3]==0 && mpp[7]==0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            if (mpp[5]>0 || mpp[10]>0)
            {
                cout << 0 << endl;
            }
            else if (mpp[4]>0 || mpp[9]>0)
            {
                cout << 1 << endl;
            }
            else if (mpp[3]>0 || mpp[8]>0)
            {
                cout << 2 << endl;
            }
            else if (mpp[2]>0 || mpp[7]>0)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << 4 << endl;
            }
        }
    }
}