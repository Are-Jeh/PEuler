#include<iostream>
using namespace std;
int main(){
    long int sum = 0;
    for(int i=1;i<101;++i){
        sum = sum + i*i*(i-1);
    }
    cout<<sum;
}
