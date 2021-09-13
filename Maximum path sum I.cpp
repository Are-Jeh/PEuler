#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 15;
    vector<int> temp(n,0);
    vector< vector<int> > v(n, temp);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;++j)
        {
            cin>>v[i][j];
        }
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if(j==0)
            v[i][j] += v[i-1][j];
            else 
            v[i][j] += max(v[i-1][j], v[i-1][j-1]);
        }
    }
    cout<<*max_element(v[n-1].begin(), v[n-1].end());

}