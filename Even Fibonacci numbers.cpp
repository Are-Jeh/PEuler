#include <iostream>
#include <cmath>
using namespace std;


// F(n+1) = round( F(n) Phi )
int main()
{
    double phi = (1+sqrt(5))/2;
    long int fnth = 2 ; 
    //cout<<phi<<" "<<fnth;
    long long int sum = 0; 

    while(fnth<=4000000)
    {
        sum+=fnth;
        fnth = round(fnth*(phi*phi*phi)); 
        //cout<<fnth<<" ";
    }
    cout<<sum;
}