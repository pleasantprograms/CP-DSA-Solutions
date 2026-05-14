#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n; //no of statements
    cin >> n;

    string s; 
    int p=0;
    while (n--)
    {
        cin >> s;
        if (s == "X++" || s == "++X")
        {
            p++;
        }
        else if (s == "X--" || s == "--X")
        {
            p--;
        }
    }
    cout << p << endl;
    return 0;
}