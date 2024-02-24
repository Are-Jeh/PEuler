#include <iostream>
using namespace std;
using namespace std::chrono;

bool checkForPalindrome(int N)
{
    string s = to_string(N);
    string temp = s;
    reverse(temp.begin(), temp.end());

    if (s.compare(temp) == 0)
        return true;
    return false;
}

int main()
{
    auto start = high_resolution_clock::now();

    int N = 1000;
    int maxP = 0;
    int n11 = (N / 11) * 11;

    for (int i = n11; i >= 100; i -= 11)
    {
        for (int j = 999; j >= 100; --j)
        {
            int tmp = i * j;
            if (tmp > maxP)
            {
                if (checkForPalindrome(tmp))
                {
                    maxP = tmp;
                }
            }
        }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << "microseconds. \n";
    cout << maxP;
}