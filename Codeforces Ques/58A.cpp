#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int h = -1, e = -1, l1 = -1, l2 = -1, o = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'h')
        {
            h = i;
            break;
        }
    }
    if (h != -1)
    {
        for (int i = h + 1; i < s.length(); i++)
        {
            if (s[i] == 'e')
            {
                e = i;
                break;
            }
        }
        if (e != -1)
        {
            for (int i = e + 1; i < s.length(); i++)
            {
                if (s[i] == 'l')
                {
                    l1 = i;
                    break;
                }
            }
            if (l1 != -1)
            {
                for (int i = l1 + 1; i < s.length(); i++)
                {
                    if (s[i] == 'l')
                    {
                        l2 = i;
                        break;
                    }
                }
                if (l2 != -1)
                {
                    for (int i = l2 + 1; i < s.length(); i++)
                    {
                        if (s[i] == 'o')
                        {
                            o = i;
                            break;
                        }
                    }
                    if (o!=-1)
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                    else
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                else
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
}