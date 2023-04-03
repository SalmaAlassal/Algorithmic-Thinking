#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{   
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }   
    }
}

int main()
{
    int n = 5;
    int arr[n] = {4, 2, 5, 3, 1};

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}