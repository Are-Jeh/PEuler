#include <iostream>
using namespace std;
using namespace std::chrono;

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
    auto start = high_resolution_clock::now();
    long long int N = 600851475143;
    // Need to find the largest prime factor of this number.
    // find integers that divide this and then check whether it is prime or not
    int ans = 1;
    // if I use i*i <= N, I get a floating point exception
    for (int i = 2; 1LL * i * i <= N; ++i)
    {
        if (N % i == 0)
        {
            if (isPrime(i))
                ans = i;
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << "microseconds. \n";
    cout << ans;
}