#include <iostream>
using namespace std;

void printArray(int array[], int n){
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(void){

    cout << endl;

    int number[15] = {}; // declaration and intialization with 0

    // accessing an element
    // cout << "Value at 14 index : " <<  number[14] << endl; // outputs value at 14 index

    // accessing an out of bound index
    // cout << "Value at 20 index : " <<  number[20] << endl; // undefined behaviour, may throw an exception, may show some grabage value, or crash

    int second[3] = {5, 7, 11};

    // cout << "Value at 2 index : " <<  second[2] << endl; // outputs value at 14 index

    int third[15] = {2, 7}; // third[0] = 2, third[1] = 7, rest all are set to 0

    //print the array
    int n = 15; // size of the array
    // cout << "Printing the array 'third'" << endl;
    // printArray(third, n);

    int fourth[10] = {0};
    n = 10;
    // cout << "Printing the array 'fourth'" << endl;
    // printArray(fourth, n);

    int fifth[15];
    fill(fifth, fifth + 15, 1); // this function is available in algorithm header // can also use fill_n(array, n, 1);
    n = 15;
    // cout << "Printing the array 'fifth'" << endl;
    // printArray(fifth, n);



    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;

    // similary arrays can be made of types bool, float, double and other data types.



    cout << endl << "Everything is fine :)" << endl << endl;
    return 0;
}