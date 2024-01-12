#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; ++i){
        cout<<arr[i]<<' ';
    }cout<<'\n';
}

//smallest ele brought to the beginning
void selectionSort(int arr[], int n){
    for(int i=0; i<n; ++i){
        int index= i;
        for(int j=i;j<n; ++j){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    printArray(arr, n);
}

//we sort at the end first, largest element gets sent to the end.
void bubbleSort(int arr[], int n){
    for(int i=0; i<n; ++i){
        for(int j=1; j<n;++j){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1], arr[j]);
            }
        }
        printArray(arr, n);
    }
}

void insertionSort(int arr[], int n){
    for(int i=0; i<n; ++i){
        int index = -1;
        for(int j=i-1; j>=0; --j){
            if(arr[i]<arr[j])index = j;
        }

        if (index!=-1){
            int temp = arr[i];
            for(int k = i; k>index; --k){
                arr[k] = arr[k-1];
            }
            arr[index]=temp;
        }
    }
    printArray(arr, n);
}

void merge(int arr[], int start, int mid, int end){
    int temp[end-start+1];
    int left = start, right = mid+1;
    int index = 0;

    while(left <= mid && right <= end){
        if(arr[left]<arr[right]){
            temp[index++] = arr[left++];
        } else {
            temp[index++] = arr[right++];
        }
    }
    while(left<=mid){
        temp[index++] = arr[left++];
    }
    while(right<=end){
        temp[index++] = arr[right++];
    }

    for(int i=0; i<index; ++i){
        arr[i+start] = temp[i];
    }
}

void mergeSort(int arr[], int start, int end){
    if (start >=end) return;
    int mid = (start+end)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);

    merge(arr, start, mid, end);
}

void mergeSort(int arr[], int n){
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
}

int main(){
    int arr[] = {-1,2,8, 3, 17, 4, -8, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, size);
    
}
