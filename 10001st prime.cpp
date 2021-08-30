#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<bool>a (10001*10001, false);
    //bool a[10001*10001] = {  };
    int n = a.size();

    for(int p=2 ; p < sqrt(n) ; p++ )
    {
        if(!a[p])
        {
            for(int j = p*p; j<n ;j+=p )
            {
                a[j]=true;
            }
        }
    }
    int count = 0;
    for(int i = 2; i < n; i++)
    {
        if(!a[i])
            count++;
        if(count==10001) 
            {cout<<i<<'\n';break;}  
    }
    
}