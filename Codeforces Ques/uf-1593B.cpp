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
        int k = n;
        while(k!=0)
        {
            p.push_back(k%10);
            k/=10;
        }
        int st=0;
        int end=p.size()-1;
        while(st<=end)
        {
            swap(p[st],p[end]);
            st++;
            end--;
        }
        int ans=0;
        int b = p.size();
        if (p[b-1]==0)
        {
            while((p[b-2]!=5 && p[b-2]!=0))
            {
                p.erase(p.begin()+b-2);
                ans++;
                b--;
            }
        }
        else if (p[b-1]!=0)
        {
            if (p[b-1]==5)
            {
                while((p[b-2]!=2 && p[b-2]!=7))
                {
                    p.erase(p.begin()+b-2);
                    ans++;
                    b--;
                }
            }
            else
            {
                while(p[b-1]!=0 && p[b-1]!=5)
                {
                    p.pop_back();
                    ans++;
                    b--;
                }
                if (p[b-1]==0)
                {
                    while((p[b-2]!=5 && p[b-2]!=0))
                    {
                        p.erase(p.begin()+b-2);
                        ans++;
                        b--;
                    }
                }
                else
                {
                    while((p[b-2]!=2 && p[b-2]!=7))
                    {
                        p.erase(p.begin()+b-2);
                        ans++;
                        b--;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}