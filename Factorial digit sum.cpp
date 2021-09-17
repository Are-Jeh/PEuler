#include<iostream>
#include<vector>
using namespace std;
int main()
{
    float f = 0; int N = 100;
    for(int i=1;i<=N;i++)
    f+= log10(i);

    int n = int(f)+1;
    vector<int>a(n,0);
    cout<<"\nn: "<<n<<"\n";

    int carry = 1;
    for(int k=1;k<N+1;k++)
    {
        // cout<<"\nk: "<<k;
        int i=0; 
        do
        {
            int temp = a[i]*k + carry;
            //if(k==6)printf("a[i]: %d carry %d \n",a[i], carry );
            //if(k==6)cout<<temp;
            a[i] = (temp) %10;
            //if(k==6)cout<<a[i];
            carry = (temp)/10;
            //if(k==6)cout<<a[i];
            i++;
        }
        while(i<n);

    // for(int j=0;j<n;++j)
    // cout<<a[n-1-j];
    // cout<<endl;
    
    }
    int sum = 0;
    for(int i=0;i<n;++i)
    sum+=a[i];

    cout<<sum;

}