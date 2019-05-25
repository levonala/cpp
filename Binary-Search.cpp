#include <iostream>

bool Contains(int x, int *arr, int left, int right)
{
    if (right >= left) {
        int m = left + ( right - left) / 2;
        if (x == arr[m]) {
            return true;
        }
        if (arr[m] > x) {
            return Contains(x, arr, left, m - 1);
        }
        else if (arr[m] < x ) {
            return Contains(x, arr, m + 1, right);
        }
    }

    return false;
}

bool IsArrSorted(int arr[], int n) {
    bool s = true;
    for (int i = 0; i < n - 1; ++i) {
//        std::cout << arr[i] << " " << arr[i+1] << "\n";
        if (arr[i+1] < arr[i]) {
            s = false;
        }
    }
    return s;
}

void SortArr(int arr[], int n)
{
    if (n == 1)
        return;
    
    for (int i = 0; i < n - 1; ++i)
        if (arr[i] > arr[i + 1]) {
            int tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
        }
    
    SortArr(arr, n - 1);
}

void ShowArr(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

int main(int argc, const char * argv[]) {
    
    int arr[] = {75, 36, 83, 25, 76, 2, 88};
    int size = sizeof(arr) / sizeof(arr[0]) - 1;
    if (!IsArrSorted(arr, 7)) {
        SortArr(arr, 7);
    }
    std::cout << Contains(2, arr, 0, size) << "\n";
}
