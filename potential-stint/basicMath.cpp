#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    if(n<0)n *=-1;
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count;
    return count;
}

int reverseNumber(int n){
    int flag = 1;
    if(n<0) flag=-1;
    n *= flag;
    int rev = 0;
    while(n>0){
        rev = rev*10 + (n%10);
        n /= 10;
    }
    cout<<rev*flag;
    return rev*flag;
}

int gcd(int a, int b){
    if(b==0 )return a;
    return gcd(b, a%b);
}

bool armstrongNumber(int N){
    int count = to_string(N).size();
    int temp = N;
    long long int finalAns = 0;
    while(N>0){
        finalAns = finalAns + pow((N%10), count);
        N /=10;
    }
    return temp == finalAns;
}

void printDivisors(int N){
    // for(int i=1; i<=N; ++i){
    //     if(N%i==0){
    //         cout<<i<<' ';
    //     }
    // }
    set<int>s;
    for(int i=1; i*i<=N; ++i){
        if(N%i==0){
            s.insert(i);
            s.insert(N/i);
        }
    }
    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it<<' ';
    }
}

bool checkforPrime(int N){
    if(N<2)return false;
    if(N<4)return true;
    for(int i=2; i*i<=N; ++i){
        if(N%i==0){return  false;}
    }
    return true;
}

int main(){
    // int N, M;cin>>N>>M;
    // int N; cin>>N;
    for(int N=1; N<100; N++){
        if(checkforPrime(N)){
            cout<<N<<' ';
        }
    }

    return 0;
}
