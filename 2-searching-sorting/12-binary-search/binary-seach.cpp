#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    int mid = start + ((end - start) / 2);

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        else { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);

    }

    return -1;

}

int main(void){

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int index = binarySearch(even, 6, 21);
    cout << " Index of 21 in even is " << index << endl;

    int oddIndex = binarySearch(odd, 5, 8);
    cout << " Index of 8 in odd is " << oddIndex << endl;

    return 0;
}