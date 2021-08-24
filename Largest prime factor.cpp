#include<iostream>
using namespace std;

bool isPrime(long n)
{
    if(n<2)return false;
    if(n<4)return true;
    
    for(int i=2;i<=sqrt(n);++i)
    if(n%i==0)return false;

    return true;
}

int main()
{
    //cout<<isPrime(9999);
    long long int n = 600851475143;
    // need to find the largest prime factor
    long int ans = n;
    long int i=2;

    while(i<=n)
    {
        if(i>ans){break;}
        if( ans%i == 0 ) 
        {
            ans/=i;
            if (isPrime(ans)) break;
        }
        else i++;
        //cout<<ans<<" "<<i<<"\n";
    }

    cout<< ans;

}