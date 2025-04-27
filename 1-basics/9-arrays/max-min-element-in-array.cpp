#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n){
    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        if(num[i] > max){
            max = num[i];
        } // can be done through maxi = max(maxi, num[i]);
    }

    return max;
}

int getMin(int num[], int n){
    int min = INT_MAX;

    for(int i = 0; i < n; i++){
        if(num[i] < min){
            min = num[i];
        } // can be done through mini = min(mini, num[i]);
    }

    return min;
}

int main(void){
    int size;
    cin >> size;

    // int num[size]; // variable size is a bad practice

    // declaring an array with large size is better than variable size like int num[100000];

    int num[100];
    // taking input in the array
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << "Maximum value is : " << getMax(num, size) << endl;
    cout << "Minimum value is : " << getMin(num, size) << endl;

    return 0;
}