#include <iostream>
#include <vector>
using namespace std;
using namespace std::chrono;

int numOfDivisors(int n)
{
    int count = 0;

    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            if (i == n / i)
                count++;
            else
                count += 2;
        }
    }
    return count;
}

int main()
{
    // num_of_divisors(traingle(n)) =
    // num_of_divisors(n/2) * num_of_divisors(n+1) -> n is even
    // num_of_divisors(n) * num_of_divisors((n+1)/2) -> n is odd
    auto start = high_resolution_clock::now();

    int N = 13000;
    vector<int> num_of_divs;
    for (int i = 0; i <= N; ++i)
    {
        num_of_divs.push_back(numOfDivisors(i));
    }

    int ans = 0;
    for (int n = 0; n < N; ++n)
    {
        int tmp = 0;
        if (n % 2 == 0)
            tmp = num_of_divs[n / 2] * num_of_divs[n + 1];
        else
            tmp = num_of_divs[(n + 1) / 2] * num_of_divs[n];
        if (tmp > 500)
        {
            ans = n;
            break;
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << "microseconds. \n";
    cout << 1LL * (ans * (ans + 1)) / 2;
}