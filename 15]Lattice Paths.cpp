#include <iostream>
using namespace std;

int main()
{
    int n = 20;
    long long int dp[2 * n + 1][n + 1];

    for (int i = 0; i < 2 * n + 1; ++i)
    {
        for (int j = 0; j < n+1; ++j)
        {
            if (i == 0)
            {
                dp[i][j] = 0;
            }
            else if (j == 0)
                dp[i][j] = 1;
            else if (i < j)
                dp[i][j] = 0;
            else if (i == j)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }
    // for (int i = 0; i < 2 * n + 1; ++i)
    // {
    //     for (int j = 0; j < n+1; ++j)
    //     {
    //         cout << dp[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    cout << dp[2 * n][n];
}
