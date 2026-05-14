#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        vector<int> arr;
        int count;
        for(int i=0; i<n; i++)
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
        for(int i=0; i<q; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        for(int i=0; i<q; i++)
        {
            count=0;
            for(int j=0; j<n; j++)
            {
                if (s[j]=='A')
                {
                    arr[i]--;
                    count++;
                }
                else if (s[j]=='B')
                {
                    arr[i]/=2;
                    count++;
                }
                
                if (arr[i]==0)
                {
                    cout << count << endl;
                    break;
                }
            }
            break;
        }
    }
}