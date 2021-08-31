#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long int N = 100000000;
    long long int n = 1, index = 2;
    for(; n<N;n += index++  )
    {
        //cout<<n<<' ';
    int c = 0;
    for(int i=1;i*i<n;i++)
    {
        if(n%i==0)
        {if(n/i == i)c++;
        else c+=2;}
    }
    if(c>=500){cout<<n;break;}
    }
}

/*
#include<iostream>
#include<vector>
using namespace std;
vector<long long int> sieve(long long int n)
{
    vector<bool>v(n,true);
    vector<long long int>primes;
    for(int p=2;p*p<n;p++)
    {
        for(int j = p*p;j<n;j+=p)
        {
            v[j]=false;
        }
    }
    for(int i=2;i<n;++i)if(v[i])primes.push_back(i);
    return primes;
}

int main()
{
    long long int N = 10000000; //cin>>n;
    //vector<long long int>primes = sieve(N);
    bool v[100000000] = { };
    vector<int>primes;
    for(int p=2;p*p<N;p++)
    {
        for(int j = p*p;j<N;j+=p)
        {
            v[j]=true;
        }
    }

    for(int i=2;i<N;++i)
    if(!v[i])
    primes.push_back(i);
 
    int prv = 1, curr = 1; int total=1;

    cout<<"\n\n\n#######\n";
    for(int n = 2; n <N ; n++)
    {
        //cout<<n;
        prv = curr;
        total = 1;
        int temp = n;
        for(int i = 0 ; i < primes.size() ; ++i)
        {
            int count = 0, prime = primes[i];
            while(temp % prime == 0 )
            {
                temp = temp / prime;
                count++;
                //cout<<temp%prime<<' ';
            }
            total  *= (count+1);
        }
        curr = total;
        if(curr+prv>=502)
        {
            cout<<n;break;
        } 
        //cout<<' '<<curr+prv<<'\n';  
    }

}
*/
