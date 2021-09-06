#include<iostream>
using namespace std;
int main()
{
    string oneto9[] = {"","one", "two", "three", "four", "five", "six", "seven","eight", "nine"};
    string elevento19[] = {"","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string x10s[] = {"","ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    int sum1to9 = 0, sum11to19 = 0; int s99 = 0, s999 = 0;

    for(int i=0;i<10;++i)
    {
        sum1to9+=oneto9[i].length();
        sum11to19+=elevento19[i].length();
    }

    s99 =  sum1to9 + x10s[1].length() + sum11to19  ;

    for(int i=20;i<100;++i)
        s99 = s99 + x10s[i/10 ].length() + oneto9[i%10 ].length() ;

    int hundred = strlen("hundred"),
    thousand = strlen("thousand"), 
    andd = strlen("and");

    s999 = s99 + strlen("one")+ hundred;

    for(int i=101;i<1000;++i)
    {
        s999 +=  1* oneto9[i/100].length()+ hundred+andd;
        if(i%100==0)s999-=andd;
    }
    s999 += 9*s99;

    s999 += strlen("one") + thousand ;

    cout<<s999;
    

}