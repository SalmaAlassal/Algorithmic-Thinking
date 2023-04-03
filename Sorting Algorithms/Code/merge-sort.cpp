#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int leftArray[n1], rightArray[n2];

    for (int i = 0; i < n1; i++)
        leftArray[i] = arr[start + i];

    for (int i = 0; i < n2; i++)
        rightArray[i] = arr[mid + 1 + i];

    int leftPtr = 0, rightPtr = 0, index = start;

    while (leftPtr < n1 && rightPtr < n2)
    {
        if (leftArray[leftPtr] <= rightArray[rightPtr])
        {
            arr[index] = leftArray[leftPtr];
            leftPtr++;
        }
        else
        {
            arr[index] = rightArray[rightPtr];
            rightPtr++;
        }

        index++;
    }

    while (leftPtr < n1)
    {
        arr[index] = leftArray[leftPtr];
        leftPtr++;
        index++;
    }

    while (rightPtr < n2)
    {
        arr[index] = rightArray[rightPtr];
        rightPtr++;
        index++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        // Divide
        int mid = (start + end ) / 2;

        // Conquer
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        // Merge
        merge(arr, start, mid, end);
    }
}

int main()
{
    int n = 10;
    int arr[n] = {10, 2, 9, 4, 5, 8, 7, 6, 3, 1};

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    cout << endl;

    return 0;
}