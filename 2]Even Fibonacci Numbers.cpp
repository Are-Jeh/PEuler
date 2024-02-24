#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 2;
    int max = 4000000;
    long long int sum = 0;
    int c = 0;
    if (a % 2 == 0)
        sum += a;
    if (b % 2 == 0)
        sum += b;
    while (a < max && b < max)
    {
        c = a + b;
        b = b + c;
        a = c;

        if (a % 2 == 0)
            sum += a;
        if (b % 2 == 0)
            sum += b;
    }
    cout << sum;
}