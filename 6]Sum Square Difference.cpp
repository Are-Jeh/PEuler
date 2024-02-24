#include <iostream>
using namespace std;
int main()
{
    // find diff between
    // square of sum and sum of square
    //  (n(n+1)/2)^2 - (n)(n+1)(2n+1)/6

    int N = 100;
    long long int squareOfSum = (1LL * N * N * (N + 1) * (N + 1)) / 4;
    long long int sumOfSquare = (1LL * N * (N + 1) * (2 * N + 1)) / 6;
    cout << squareOfSum - sumOfSquare << '\n';
}