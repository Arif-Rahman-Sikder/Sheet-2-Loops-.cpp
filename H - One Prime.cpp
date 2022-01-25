
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int number, divisor;
    bool isprime = true;
    cin >> number;

    for (divisor = 2; divisor <= (number / 2); divisor++)
    {
        if ((number % divisor) == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
