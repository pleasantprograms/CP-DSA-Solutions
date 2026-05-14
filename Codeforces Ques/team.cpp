#include <iostream>
using namespace std;

int main()
{
    int p; // no of problems
    cin >> p;
    int ans=0; // no of ques answered

    for (int i = 1; i<=p; i++)
    {
        int o1, o2, o3 ; //outputs
        cin >> o1 >> o2 >> o3 ;
        if (o1==1 && o2==1 && o3!=1)
        {
            ans++;
        }
        if (o1==1 && o3==1 && o2!=1)
        {
            ans++;
        }
        if (o2==1 && o3==1 && o1!=1)
        {
            ans++;
        }
        if (o2==1 && o3==1 && o1==1)
        {
            ans++;
        }

    }
    cout << ans << endl;
    return 0;
}