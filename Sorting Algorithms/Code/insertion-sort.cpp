#include <iostream>
using namespace std;

// The function iterates through the array from the second element,
// comparing each element with the elements before it and inserting
// it into the correct position in the sorted subarray.
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
    int n = 5;
    int arr[n] = {6, 7, 2, 1, 9};

    insertaionSort(arr, n);

    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    return 0;
}
