#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N = 10001;
    vector<bool> soe(N*N, true);

    for(int i = 2; 1LL*i*i<1LL*N*N; ++i){
        if(soe[i]){
            for(int j=i*i; j<N*N; j+=i)
                soe[j] = false;
        }
    }

    int count = 0;
    for(int i=2; i<N*N;++i)
    {if(soe[i])count++;
        if (count == N){
            cout<<i<<'\n';
            break;
        }
    }
}