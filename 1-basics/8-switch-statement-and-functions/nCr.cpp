#include <iostream>
using namespace std;

int calcFactorial(int n){
    if(n == 0){
        return 1;
    }

    return (n * calcFactorial(n - 1));
}

int calcCombination(int n, int r){
    return (calcFactorial(n) / (calcFactorial(r) * calcFactorial(n - r)));
}

int main(void){
    int n, r;
    cin >> n >> r;

    // cout << calcFactorial(n) << endl;

    cout << calcCombination(n, r) << endl;

    return 0;
}