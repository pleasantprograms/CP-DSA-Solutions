#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);
        vector<pair<int,int>> order;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
            order.push_back({b[i],a[i]});
        }
        sort(order.begin(),order.end());
        long long int minc = p;
        int alr = 1;
        for (auto& pair : order)
        {
            if (pair.first<p)
            {
                if (n-alr<=pair.second)
                {
                    minc += pair.first*(n-alr);
                    alr += n-alr;
                }
                else
                {
                    minc += pair.first*pair.second;
                    alr += pair.second;
                }
            }
            else
            {
                minc += (n-alr)*p;
                break;
            }
        }
        cout << minc << endl;
    }
    return 0;
}