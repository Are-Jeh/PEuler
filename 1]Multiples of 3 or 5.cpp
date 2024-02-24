#include <iostream>
using namespace std;
int main()
{
    // find sum of all multiples of 3 OR 5
    //  that means, remove duplicates

    // Also to note,question mentions to
    // find sum of all multiples BELOW 1000
    long long int sum = 0;
    int N = 1000;

    for (int i = 2; i < N; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    cout << sum;
}
