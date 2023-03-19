#include <iostream>
using namespace std;

// This fun implements the linear search algorithm. 
// It iterates over each element of the array 
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i; // Returns the index of the target value in the array
    }

    // If the target value is not found
    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << linearSearch(arr, 10, 7) << endl;

    return 0;
}