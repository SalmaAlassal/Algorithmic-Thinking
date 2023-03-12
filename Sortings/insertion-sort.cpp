#include <iostream>
using namespace std;

// The function iterates through the array from the second element,
// comparing each element with the elements before it and inserting
// it into the correct position in the sorted subarray.

// The time complexity of insertion sort is O(n^2) 

void insertaionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 and arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    insertaionSort(arr, n);

    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    return 0;
}
