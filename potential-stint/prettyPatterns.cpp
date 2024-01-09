#include <iostream>
using namespace std;

int min(int a, int b)
{
    return a > b ? b : a;
}

void printStarTriangle(int N)
{
    for (int i = N; i > 0; --i)
    {
        int j;
        for (j = 1; j <= N - i; ++j)
        {
            cout << ' ';
        }
        for (j = 1; j <= 2 * i - 1; ++j)
        {
            cout << '*';
        }
        for (j = 1; j <= N - i; ++j)
        {
            cout << ' ';
        }
        cout << '\n';
    }
}

void printZeroesOnes(int N)
{
    for (int i = 1; i <= N; ++i)
    {
        int j;
        for (j = 1; j <= i; ++j)
        {
            cout << (i + j + 1) % 2;
        }
        for (j = i + 1; j <= N; ++j)
        {
            cout << ' ';
        }
        cout << '\n';
    }
}

void printNumberCrown(int N)
{
    for (int i = 1; i <= N; ++i)
    {
        int j;
        for (j = 1; j <= i; ++j)
        {
            cout << j;
        }
        for (j = 1; j <= 2 * (N - i); ++j)
        {
            cout << ' ';
        }
        for (j = i; j > 0; --j)
        {
            cout << (j);
        }
        cout << '\n';
    }
}

void IncreasingNumberTriangle(int N)
{
    // int count = 0;
    int i = 1;
    for (int count = 1; count <= N; ++count)
    {
        int j = i;
        for (i = j; i < j + count; ++i)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }
}

void alphaHillPattern(int N)
{
    for (int i = 1; i <= N; ++i)
    {
        int j;
        for (j = 1; j <= N - i; ++j)
        {
            cout << ' ';
        }
        for (j = 1; j < i; ++j)
        {
            cout << (char)('A' + j - 1);
        }
        for (j = i; j > 0; --j)
        {
            cout << (char)('A' + j - 1);
        }
        for (j = 1; j <= N - i; ++j)
        {
            cout << ' ';
        }

        cout << '\n';
    }
}

void numberPattern(int N)
{
    for (int i = 1; i < 2 * N; ++i)
    {
        for (int j = 1; j < 2 * N; ++j)
        {
            cout << (N + 1 - min(min(i, j), min(2 * N - i, 2 * N - j)));
        }
        cout << '\n';
    }
}

int main()
{
    int N;
    cin >> N;
    // printStarTriangle(N);
    // printZeroesOnes(N);
    // printNumberCrown(N);
    // IncreasingNumberTriangle(N);
    // alphaHillPattern(N);
    // numberPattern(N);
    return 0;
}
