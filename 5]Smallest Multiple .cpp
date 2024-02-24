#include <iostream>
#include <vector>
using namespace std;

int isPrime(int N)
{
    if (N < 2)
        return false;
    for (int i = 2; i * i <= N; ++i)
    {
        if (N % i == 0)
            return false;
    }
    return true;
}

int main()
{
    // need to find the smallest number
    // that is divisible by all under 20
    // soln -
    // All primes under 1-N(here N = 20), need to find the highest power of all
    // primes under N, and simply multiply Prod(prime^(its power))
    vector<int> v;
    int N = 20;
    for (int i = 2; i <= N; ++i)
    {
        if (isPrime(i))
            v.push_back(i);
    }

    long long int prod = 1;
    for (int i = 0; i < v.size(); ++i)
    {
        prod = prod * pow(v[i], (int)(log2(N) / log2(v[i])));
    }
    cout << prod;
}