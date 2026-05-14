#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> goal(n);
    for(int i=0; i<n; i++)
    {
       cin >> goal[i];
    }
    int a = 0;
    int b = 0;
    string alt;
    for(int i=0; i<n; i++)
    {
        if (goal[i]==goal[0])
        {
            a++;
        }
        else
        {
            b++;
            alt = goal[i];
        }
    }
    if (a>b)
    {
        cout << goal[0] << endl;
    }
    else
    {
        cout << alt << endl;
    }

}