#include <iostream>
using namespace std;

int main(){
    // given a, b, c
    // a+b+c=100 && c = sqrt(a*a + b*b)
    // need to find a, b, c

    for(int i=1; i<1000;++i){
        for(int j=1; j<1000; ++j)
            if( (i+j-1000)*(i+j-1000) == (i*i + j*j)){
                cout<< i<<" "<<j<<" || ";
                cout<< (i * j * sqrt(i*i + j*j)) << '!'; 
            }
    }
}