#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
    ifstream readf("input13.txt");
    string temp="";
    vector<string>vs;
    while(getline(readf, temp))
    {
        reverse(temp.begin(), temp.end());
        vs.push_back(temp);
    }
    
    /*for(int i=0;i<vs.size();i++)
    cout<<vs[i]<<'\n';*/

    string final = "";
    int carry = 0;
    for(int i=0;i<vs[0].size();++i)
    {
        int tempsum = carry;
        for(int j=0;j<vs.size();j++)
        {
            tempsum += (vs[j][i] - '0');
        }
        final.push_back(tempsum%10 + '0');
        carry = tempsum/10;
    }
    while(carry)
    {
        final.push_back(carry%10 + '0');
        carry /= 10;
    }

    reverse(final.begin(), final.end());
    for(int i=0;i<10;i++)cout<<final[i];

}