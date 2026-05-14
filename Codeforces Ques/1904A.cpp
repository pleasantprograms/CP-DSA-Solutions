#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq ;
        vector <pair<int,int>> p;
        vector <pair<int,int>> q;
        if (a==b)
        {
            p.push_back({xk+a,yk+b});
            p.push_back({xk-a,yk-b});
            p.push_back({xk+a,yk-b});
            p.push_back({xk-a,yk+b});

            q.push_back({xq+a,yq+b});
            q.push_back({xq-a,yq-b});
            q.push_back({xq+a,yq-b});
            q.push_back({xq-a,yq+b});

        }
        else
        {
            p.push_back({xk+a,yk+b});
            p.push_back({xk-a,yk-b});
            p.push_back({xk+a,yk-b});
            p.push_back({xk-a,yk+b});
            p.push_back({xk+b,yk+a});
            p.push_back({xk-b,yk-a});
            p.push_back({xk+b,yk-a});
            p.push_back({xk-b,yk+a});

            q.push_back({xq+a,yq+b});
            q.push_back({xq-a,yq-b});
            q.push_back({xq+a,yq-b});
            q.push_back({xq-a,yq+b});
            q.push_back({xq+b,yq+a});
            q.push_back({xq-b,yq-a});
            q.push_back({xq+b,yq-a});
            q.push_back({xq-b,yq+a});
        }
        int c=0;
        for (auto& p1 : p)
        {
            for(auto& p2 : q)
            {
                if (p1==p2)
                {
                    c++;
                }
            }
        }
        cout << c << endl;
    }
}