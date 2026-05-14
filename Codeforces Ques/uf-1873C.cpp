#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int ans=0;
        for(int i=1; i<=10; i++)
        {
            for(int j=1; j<=10; j++)
            {
                char p;
                cin >> p;
                
                if (i==1 || i==10 || j==1 || j==10)
                {
                    if (p=='X')
                    {
                        ans+=1;
                    }
                }
                else if (i=={5,6} || j=={5,6})
                {
                    if (p=='X')
                    {
                        ans+=5;
                    }
                }
            }
        }
    }
}