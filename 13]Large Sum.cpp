#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

string addTwoStrings(string s1, string s2)
{
    int l1 = s1.length(), l2 = s2.length();
    if (l2 > l1)
    {
        swap(s1, s2);
        swap(l1, l2);
    }
    int itr = 0, carry = 0, n = 0;
    string s;
    // cout<<"s1: "<<s1 << " "<<"s2: "<<s2 << '\n';
    while (itr < l1 && itr < l2)
    {
        n = (s1[l1 - 1 - itr] - '0') + (s2[l2 - 1 - itr] - '0') + carry;
        // cout<<"n" << n <<'\n';
        s = (to_string)(n % 10) + s;
        carry = n / 10;
        itr++;
    }
    while (itr < l1)
    {
        n = (s1[l1 - 1 - itr] - '0') + carry;
        s = (to_string)(n % 10) + s;
        carry = n / 10;
        itr++;
    }
    if (carry)
        s = to_string(carry) + s;
    return s;
}
int main()
{
    ifstream myfile("input_13.txt");
    string line;
    vector<string> arr;
    if (myfile.is_open())
    {
        while (myfile)
        {
            getline(myfile, line);
            arr.push_back(line);
        }
    }
    else
    {
        cout << "Couldnot open file\n";
    }
    // I needed to add an EOF or \n
    // at the end of the input file, otherwise I was getting
    // the last string in repeat, giving me wrong ans!
    string ans = addTwoStrings(arr[0], arr[1]);
    for (int i = 2; i < arr.size(); ++i)
    {
        ans = addTwoStrings(ans, arr[i]);
    }
    cout << ans << '\n';
}