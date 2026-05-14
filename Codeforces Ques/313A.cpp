#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
        return 0;
    }
    else
    {
        int a = abs(n) % 10;
        int b = (abs(n) % 100 - a) / 10;

        vector<int> s;
        int temp = abs(n);
        while (temp != 0)
        {
            s.push_back(temp % 10);
            temp /= 10;
        }
        int st = 0;
        int end = s.size() - 1;
        while (st < end)
        {
            swap(s[st], s[end]);
            st++;
            end--;
        }
        if (a >= b)
        {
            cout << "-";
            for (int i = 0; i < s.size() - 1; i++)
            {
                cout << s[i];
            }
            return 0;
        }
        else
        {
            if (s.size() == 2)
            {
                if (s[1] == 0)
                {
                    for (int i = 0; i < s.size(); i++)
                    {
                        if (i != s.size() - 2)
                        {
                            cout << s[i];
                        }
                    }
                    return 0;
                }
            }
            cout << "-";
            for (int i = 0; i < s.size(); i++)
            {
                if (i != s.size() - 2)
                {
                    cout << s[i];
                }
            }
            return 0;
        }
    }
}