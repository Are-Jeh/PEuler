#include<bits/stdc++.h>
using namespace std;

long arithmeticsum(int n, int a, int d)
{
    return (1LL * n)*(2*a + 1LL*n*d - d)*0.5;
}

int gcd(int a, int b)
{
    
    if(a>b)swap(a, b);
    if(a==0 && b==0)cout<<"NOT_DEFINED\n";
    if(a==0)return b;
    if(a==1)return 1;

    return gcd(a, b%a);
}
int main()
{
    int limit = 1000;limit--;
    int a = 3, b = 5;

    int n1 = limit/a, n2 = limit/b;
    long sum = 0;
    int lcm_ab = a*b/gcd(a,b) ;
    int n3 = limit/lcm_ab;

    sum = arithmeticsum(n1, a, a)+ arithmeticsum(n2, b, b) - arithmeticsum(n3, lcm_ab, lcm_ab);
    cout<<sum;
}