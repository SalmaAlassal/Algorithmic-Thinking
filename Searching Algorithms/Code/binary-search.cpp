#include <iostream>
using namespace std;

// Binary Search
/*
Divide: check the middle element
Conquer: Recursively search in ONE half
Combine: Trivial
Analysis: T(N) = O(Divide & Combine) + T(Conquer)
T(N) = 1 T(N/2) + Θ(1)
Master Case#2: Θ(log(N))
*/


// This fun implements the binary search algorithm, 
// which is used to search for an element in a sorted array.
int binarySearch(int arr[], int start, int end, int target)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;

        // Check if the element at the midpoint index is the target element
        if (arr[mid] == target)
            return mid;
        // If the element at the midpoint index is greater than the target element,
        // search the lower half of the range
        else if (arr[mid] > target)
            return binarySearch(arr, start, mid - 1, target);
        // Otherwise, search the upper half of the range
        else
            return binarySearch(arr, mid + 1, end, target);
    }

    // If the start index is greater than the end index, the target element is not in the array
    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << binarySearch(arr, 0, 9, 10) << endl;

    return 0;
}