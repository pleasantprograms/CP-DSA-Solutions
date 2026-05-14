#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a==b)
    {
        cout << "Tie" << endl;
        return 0;
    }
    else if (a>b)
    {
        cout << "Alice" << endl;
        return 0;
    }
    else
    {
        cout << "Bob" << endl;
        return 0;
    }
}
