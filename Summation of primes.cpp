#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<bool>a(2000000, true);

    for(int p=2; p*p<=2000000; p++)
    {
        if( a[p] )
        {
            for(int j = p*p; j<2000000; j+=p)
            {
                a[j] = false;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<2000000;i++)
    {
        if(a[i])
        sum+=i;
    }
    cout<<sum-1<<" ";

}

