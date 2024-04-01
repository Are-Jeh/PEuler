#include<iostream>
#include<vector>
using namespace std;

vector<int> multiplyVectorWithInteger(vector<int>&v, int n){
    int carry = 0;
    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); ++i){
        int tmp = carry + v[i]*n;
        v[i] = tmp%10;
        carry = tmp/10;
    }
    while(carry){
        v.push_back(carry%10); carry/=10;
    }
    reverse(v.begin(), v.end());
    return v;
}

int main(){
    vector<int>v(1,1);int sum = 0;
    for(int i=1; i<=1000; ++i){
        v = multiplyVectorWithInteger(v, 2);
    }
    for(int i=0; i<v.size(); ++i)sum += v[i];
    cout<<sum;
}
