#include <iostream>
using namespace std;

int peakElement(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        
    }

    return start;
}

int main(void){

    int arr[5] = {1, 3, 5, 2, 0};

    cout << "The peak element in the array is at the index : " << peakElement(arr, 5) << endl;

    return 0;
}