#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{   
    for (int i = 0; i < n; i++)
    {
        int minElement = arr[i], minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < minElement)
            {
               minElement = arr[j];
               minIndex = j;
            }
        }
        
        arr[minIndex] = arr[i];
        arr[i] = minElement;
    }
}

int main()
{
    int n = 5;
    int arr[n] = {4, 2, 5, 3, 1};

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}