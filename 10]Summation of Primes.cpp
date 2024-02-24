#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N = 20000 * 100;
    vector<bool> soe(N, true); // initially all are assumed to be primes

    for (int i = 2; i < sqrt(N); ++i)
    {

        if (soe[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                soe[j] = false;
            }
        }
    }
    long long int sum = 0;
    for (int j = 2; j < N; j++)
    {
        if (soe[j])sum+=j;
    }
    cout<<sum;
}