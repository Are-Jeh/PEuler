#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void recBSort(int arr[], int size)
{
    if (size < 1)
        return;
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < arr[i - 1])
            swap(arr[i], arr[i - 1]);
    }
    recBSort(arr, size - 1);
}

void recISort(int arr[], int start, int N)
{
    if (start >= N)
        return;
    int i=start;
    int temp = arr[start];
    while(i>0 && arr[i] >= temp && arr[i-1] > arr[i]){
        arr[i] = arr[i-1];
        i--;
    }
    arr[i] = temp;
    recISort(arr, start+1, N);
}

int main()
{
    // int arr[] = {13, 46, 24, 52, 20, 9};
    int arr[] = {-1,2,8, 3, 17, 4, -8, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    recISort(arr, 0, size);
    printArray(arr, size);
}
