//Help-1 https://www.mathsisfun.com/numbers/odd-square-number.html
//A little more Help - https://www.adrian.idv.hk/2012-08-09-euclid/#:~:text=Euclid's%20formula%20says%20that%2C%20(%20a,n%202%20for%20some%20integers%20.

#include<iostream>
using namespace std;

int main()
{
    long abc ;
        for(int a = 1; a<500; a++)
        {
            for (int b = a+1; b<500; b++)
            {
                int c = 1000 - a - b;
                if(a*a+ b*b == c*c)
                {
                    abc = 1LL*a*b*sqrt(a*a+b*b);
                    cout<<a<<" "<<b<<" "<<abc<<" ";
                }
            }
        }


}