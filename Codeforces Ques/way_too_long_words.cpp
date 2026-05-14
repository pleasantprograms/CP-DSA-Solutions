#include <iostream>
#include <string>
using namespace std;

int main()
{
    int w; //no of words
    cin >> w;
    int l=0; // no of letters in the words
    string s;
    while(w--)
    {
        cin >> s;
        l = s.size();
        if(l>10)
        {
            cout << s[0] << l-2 << s[l-1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
   
}