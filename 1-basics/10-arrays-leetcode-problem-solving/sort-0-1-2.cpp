// one approach: traverse once to count 0s, 1s and 2s, then traverse again to fillin those
// better approach: Dutch National Flag Algorithm using three pointers

#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    cout << endl
         << "Printing the sorted array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort012(int arr[], int size)
{
    int lo = 0, mid = 0, hi = size - 1;
    cout << lo << " " << mid << " " << hi;

    while (mid <= hi)
    {
        if (arr[mid] == 0)
            swap(arr[lo++], arr[mid++]);

        else if (arr[mid] == 1)
            mid++;

        else
            swap(arr[mid], arr[hi--]);

        printArray(arr, 9);
    }

    return;
}

int main(void)
{
    int arr[9] = {0, 2, 2, 1, 0, 1, 1, 0, 2};

    sort012(arr, 9);

    printArray(arr, 9);

    return 0;
}