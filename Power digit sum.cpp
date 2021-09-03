#include<iostream>
#include<vector>
using namespace std;

int main()
{
    const int n = (1 + 1000*log10(2));

    vector<int> a(n,0);// = {  };

    a[0] = 1; int carry = 0;

    for(int p=0;p<1000;p++)
    {
        for(int i=0;i<n;i++)
        {
            int temp = a[i] *2;
            a[i] = temp%10 + carry;
            carry = temp/10;
        }
    }
    int sum = 0;
    for(int i=n;i>=0;i--)
    {
        sum+=a[i];
        //cout<<a[i];
    }
    cout<<sum;
}















/*int modulofn(int x, int y, int m)
{
    int ans = 1;
    while(y)
    {
        if(y%2==1)ans = (ans*x)%m;
        x = (x*x)%m;
        y/=2;
    }
    return ans;
}
int main()
{
    //cout<<modulofn(2, 3, 10);
    int modulo_m = 10; int divisor = 1;
    int a = 2; int b = 1000; int total = 0;
    for(int i=0;i< 1000*log2 +1; i++)
    {
        int rem = modulofn(a, b, modulo_m);
        total += rem/divisor;
        modulo_m
    }
}
*/