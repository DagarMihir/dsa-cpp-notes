#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
        return true;
}

int main(void){
    int num;
    cin >> num;

    if(isPrime(num)){
        cout << "Given number is prime." << endl; 
    }
    else{
        cout << "Given number is not prime." << endl; 
    }
}