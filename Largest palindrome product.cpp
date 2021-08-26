#include<iostream>
#include<string>
#include <ctime>

using namespace std;

int main()
{
    //time_t start, finish;
    int maxx = 0;
    string s, r;
    //time(&start);
    for(int i=999;i>0;i--)
    {
        for(int j=999;j>0;j--)
        {
            
            if((i*j)%11==0)
            {
                s = "", r = "";
                s += to_string(i*j);
                r += s;
                reverse(r.begin(), r.end());
                if(s.compare(r)==0)
                {
                    maxx = max(maxx, i*j);
                }
            }
        }
    }
    // time(&finish);
    // cout << "Time required = " << difftime(finish, start) << " seconds\n";
    cout<<maxx;
}