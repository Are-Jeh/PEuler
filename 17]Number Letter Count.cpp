#include <iostream>
// #include <vector>
#include <unordered_map>
using namespace std;

int sumOfChars(int n)
{
    std::unordered_map<int, string> mp;
    mp = {{0, ""}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}, {0, ""}, {11, "eleven"}, {12, "twelve"}, {13, "thirteen"}, {14, "fourteen"}, {15, "fifteen"}, {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"}, {10, "ten"}, {20, "twenty"}, {30, "thirty"}, {40, "forty"}, {50, "fifty"}, {60, "sixty"}, {70, "seventy"}, {80, "eighty"}, {90, "ninety"}, {100, "hundred"}, {1000, "thousand"}, {-1, "and"}};
    if (n <= 20)
    {
        return mp[n].length();
    }
    if (n < 100)
    {
        return mp[(n / 10) * 10].length() + mp[n % 10].length();
    }
    if (n == 100)
        return mp[1].length() + mp[100].length();
    if (n < 1000)
    {
        return mp[(n / 100)].length() + mp[100].length() + (n % 100 ? mp[-1].length() : 0) + sumOfChars(n % 100);
    }
    if (n == 1000)
        return mp[1].length() + mp[1000].length();
}
int main()
{
    int sum = 0;
    // cout<<sumOfChars(15) << ' ';
    // cout<<sumOfChars(150)<< ' ';
    // cout<<sumOfChars(342)<< ' ';
    // cout<<sumOfChars(115)<< ' ';
    for (int i = 1; i <= 1000; ++i)
    {
        int ans = sumOfChars(i);
        // cout << ans << '\n';
        sum += ans;
    }
    cout << sum;
}
