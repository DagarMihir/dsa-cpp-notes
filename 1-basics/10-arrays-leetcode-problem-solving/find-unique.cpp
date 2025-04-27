#include <iostream>
using namespace std;

int findUnique(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(void){
    int arr[7] = {3, 7, 2, 2, 7, 3, 4};

    cout << "Unique element is : " << findUnique(arr, 7) << endl;

    return 0;
}