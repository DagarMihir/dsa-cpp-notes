// given an array of n size, it contains 1 to n - 1 atleast once and one of this these numbers twice, find this duplicate


#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }

    for(int i = 1; i < n; i++){
        ans = ans ^ i;
    }

    return ans;
}

int main(void){
    int arr[5] = {1, 2, 3, 4, 3};

    cout << "Duplicate in the array is : " << findDuplicate(arr, 5) << endl;
    return 0;
}