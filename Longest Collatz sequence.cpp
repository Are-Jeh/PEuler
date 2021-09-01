#include<iostream>
using namespace std;

/*int func(int n, int count)
{
    if(n==1)return count;
    else if(n%2==0)func(n/2, count+1);
    else  func(3*n+1, count+1);

}*/

int main()
{
    long long int mxcount = 0;
    long long int count = 0;long long int n; int number = 0;
    for(long long int i=2;i<1000000;i++)
    {
        count = 1;
        n = i;
        //if(n%1000==0)cout<<n<<' ';
        while(n!=1)
        {
            //if(n==1)break;
             if(n%2==0){n/=2; count++;}
            else  {n = n*3 +1; count++;}
                    
        }
        //cout<<count<<'.';
        //count = func(i, 0);
        if(count>mxcount)
        {
            mxcount = count; number = i;
        }
        //mxcount = max(mxcount, count);
    }
    cout<<mxcount<<' '<<number;
}