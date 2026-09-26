#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> freq(105);

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int cnt = 0;
        while(cnt<n)
        {
            for(int i=100; i>=1; i--)
            {
                if (freq[i]>=1)
                {
                    cout << i << " " ;
                    freq[i]--;
                    cnt++;
                }
            }
        }
        cout << endl;
    }
}