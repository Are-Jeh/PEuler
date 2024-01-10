#include<bits/stdc++.h>
using namespace std;


void func(int cnt, int N){
   if(cnt > N ) return;
   cout<<cnt<<" ";
   cnt++;
   func(cnt, N);
}

void printNto1(int N){
    if(N<1)return;
    cout<<N<<' ';
    N--;
    printNto1(N);
}

int sumUsingRecursion(int sum, int N){
    if(N<1)return sum;
    return sumUsingRecursion(sum+N, N-1);
}

int sumUsingRecursion(int N){
    if(N<1)return 0;
    else return N + sumUsingRecursion(N-1);
}

long long int factorial(int N){
    if (N<=1)return 1;
    return (1LL)*N*factorial(N-1);
}

void reverseArray(int oarr[], int fi, int la){
    if(fi>=la)return;
    swap(oarr[fi], oarr[la]);
    fi++;la--;
    reverseArray(oarr, fi, la);
}

bool checkForPalindromeString(string s, int fi, int la){
    if (s[fi] != s[la]) return false;
    if (fi >= la) return true;
    return checkForPalindromeString(s, fi+1, la-1);
}

int fibonacci(int N){
    if (N == 0 || N == 1)return N;
    else {
        int temp =  fibonacci(N-1) + fibonacci(N-2);
        cout<<temp<<' ';
        return temp;
        }
}

int main(){
    // int arr[] = { 2,3,4,5,6,7,8,9,-1, -2, -3,-4 };
    // int sizea = sizeof(arr)/sizeof(arr[0]);
    int N;cin>>N;
    fibonacci(N);
    // reverseArray(arr, 0, sizea-1);
    // for(int i=0; i<sizea; ++i){
    //     cout<<arr[i]<<'\n';
    // }
    // string astr; cin>>astr;
    // cout<<checkForPalindromeString(astr, 0, astr.size()-1);

}
