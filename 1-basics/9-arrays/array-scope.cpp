#include <iostream>
using namespace std;

void update(int arr[], int size){
    cout << "Inside the function" << endl;
    
    // updating the array's first element
    arr[0] = 120;

    // printing the array
    for(int i = 0; i < 3; i++){
         cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Going back to main" << endl;
}

int main(void){

    int arr[3] = {1, 2, 3};

    update (arr, 3);

    // printing the array
    for(int i = 0; i < 3; i++){
         cout << arr[i] << " ";
    }
    cout << endl; // output = 120 2 3 // why did arr[0] change?

    // we are passing the starting address of the array to the function, so any changes to the array in the function will be happing to the original array.
    // in case of the variables, we are making a copy

    return 0;
}