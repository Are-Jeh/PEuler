#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 2000000;
    vector<bool>a(n, true);

    for(int p=2; p*p<=n; p++)
    {
        if( a[p] )
        {
            for(int j = p*p; j<n; j+=p)
            {
                a[j] = false;
            }
        }
    }
    long long int sum=0;
    for(int i=2;i<n;i++)
    {
        if(a[i])
        sum+=i;
    }
    cout<<sum<<" ";

}

