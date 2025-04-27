#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i = 0; i + 1 < n; i += 2){
        swap(arr[i], arr[i + 1]);
    }
    return;
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";    
    }
    cout << endl;
    return;
}

int main(void){
    int even[8] = {1, 3, 5, 6, 2, 2, 6, 1};
    int odd[5] = {11, 13, 33, 8, 2};

    cout << "Printing even : ";
    printArray(even, 8);

    cout << "Printing odd : ";
    printArray(odd, 5);
    
    swapAlternate(even, 8);
    swapAlternate(odd, 5);

    cout << "Swaped even : ";
    printArray(even, 8);

    cout << "Swaped odd : ";
    printArray(odd, 5);
}