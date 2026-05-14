#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m ;
        vector<string> arr;

        for (int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            arr.push_back(s);
        }
        int p=0;
        for (int i=1; i<n; i++)
        {
            for (int j=1; j<m; j++)
            {
                    if (arr[i][j]=='1')
                    {
                        if (arr[i-1][j]!='1' && arr[i][j-1]!='1')
                        {
                            p=1;
                            break;
                        }
                    }
                    if (p==1)
                    {
                        break;
                    }
            }
            if (p==1)
            {
                break;
            }
        }
        
        if (p==0)
        {
            cout << "YES"<< endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}