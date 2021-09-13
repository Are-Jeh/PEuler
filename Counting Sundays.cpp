#include<iostream>
using namespace std;
int main()
{
    int day = 2;
    int x = 28;
    int a[] = {31, x, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ans = 0;
    int y = 1901, m = 0;
    while(y<2001)
    {
        day = (day + (a[m]%7))%7;
        if(day==0)
        {
            ans++;
            cout<<"\n m "<<m<<" y "<<y;
        }
        m++;
        if(m==12)
        {
            m=0;  
            y++;
                if(y%4==0)x = 29;
                else 
                    x=28;  
        }

    }
    cout<<ans;
}