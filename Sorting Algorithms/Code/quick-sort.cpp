#include <iostream>
using namespace std;

// Partition function to partition the array
int partition(int arr[], int start, int end)
{
    int pivot = start, leftPtr = start + 1, rightPtr = end;

    while (leftPtr <= rightPtr) 
    {
        // Move left pointer to the right until it reaches an element larger than pivot
        while (leftPtr <= rightPtr && arr[leftPtr] <= arr[pivot]) 
            leftPtr++;

        // Move right pointer to the left until it reaches an element smaller than pivot
        while (leftPtr <= rightPtr && arr[rightPtr] > arr[pivot]) 
            rightPtr--;

        // Swap the left and right elements
        if (leftPtr < rightPtr) 
            swap(arr[leftPtr], arr[rightPtr]);
    }

    // Move the pivot to its final position and return the pivot index
    swap(arr[pivot], arr[rightPtr]);
    pivot = rightPtr;

    return pivot;
}

// QuickSort function to sort the array
void quickSort(int arr[], int start, int end)
{
    // Base Case
    if (start >= end)
        return;

    // Partitioning the array
    int pivot = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, pivot - 1);

    // Sorting the right part
    quickSort(arr, pivot + 1, end);
}

int main()
{
    int n = 9;
    int arr[n] = {40, 20, 10, 80, 60, 50, 7, 30, 100};

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}