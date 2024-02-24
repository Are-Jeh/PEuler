#include <iostream>
using namespace std;

long long int lengthOfCollazChain(long long int n)
{
    long long int res = n;
    long long int count = 0;

    while (n != 1 && n > 0)
    {
        // cout<<n<<' ';
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}

int main()
{
    long long int N = 1000000;
    int maxx = -1, ans = -1;
    long long int tmp;
    for (int i = 2; i < N; ++i)
    {
        cout << i << ":i: ";
        tmp = lengthOfCollazChain(i);
        if (tmp > maxx)
        {
            maxx = tmp;
            ans = i;
        }
        cout << '\n';
    }
    cout << ans;
}