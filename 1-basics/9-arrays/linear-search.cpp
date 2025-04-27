#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return true;
        }
    }

    return false;
}

int main(void){
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int key;

    cout << "Enter the element to search for : ";
    cin >> key;

    bool found = linearSearch(arr, 10, key);

    if(found){
        cout << "Key found " << endl;
    }
    else{
        cout << "Key not found" << endl;
    }

    return 0;
}