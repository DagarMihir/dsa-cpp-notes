#include <iostream>
using namespace std;

int findSum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }

    return sum;
}

int main(void){
    int size;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << "The sum of the elements of the array is : " << findSum(num, size) << endl;

    return 0;
}