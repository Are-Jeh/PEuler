#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if(a>b)swap(a,b);
    if(a==0 && b==0){cout<<"NOT_DEFINED\n";return -1;}
    if(a==0){return b;}
    if(a==1)return 1;
    return gcd(a, b%a);
}

int main()
{
    //cout<<gcd(17, 31);
    long lcm = 1;
    for(int i=1;i<21;i++)
    {
        lcm = (i*lcm)/gcd(i, lcm);
    }
    cout<<lcm;
}