#include <iostream>
using namespace std;

int power(int num, int exp)
{
    int ans=1;
    for (int i=1; i<=exp; i++)
    {
        ans = ans*num;
    }
    return ans;
}

int main()
{
    int a, b ;
    cin >> a >> b ;
    int i=1;
    while (a*power(3,i)<=b*power(2,i))
    {
        i++;
    }
    cout << i << endl;
}