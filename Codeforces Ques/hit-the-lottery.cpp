#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;

    int c100 = n/100;
    int c20 = (n%100)/20;
    int c10 = (n - (100*c100) - (20*c20))/10;
    int c5 = (n - (100*c100) - (20*c20) - (10*c10))/5;
    int c1 = (n - (100*c100) - (20*c20) - (10*c10) - (5*c5));

    cout << c100 + c20 + c10 + c5 + c1 << endl;
}