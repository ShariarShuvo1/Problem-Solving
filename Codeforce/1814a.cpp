#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main()
{
    int run;
    cin >> run;
    while (run--)
    {
        long long int n, k;
        cin >> n;
        cin >> k;
        if (n % 2 == 0 || k == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (n % 2 == 1 && k%2==0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
