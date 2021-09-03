#include<iostream>
using namespace std;
int main()
{
    const int n = 20; // length of grid;
    // need to compute R...RD....D
    //(2n)!/n!n! = = 2n C n
    long long int dp[2*n + 1][n+1] = {0};

    for(int i=0; i<2*n+1;i++)
    for(int j=0; j<n+1; j++)
    {
        if(j==0 || i==j)dp[i][j]=1;
        if(i<j)dp[i][j]=0;
    }

    for(int i=1; i<2*n+1;i++)
    {
        for(int j=1; j<i && j<=n; j++)
        {
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
        }
    }
    //cout<<dp[21][0];
    cout<<dp[2*n][n];

}