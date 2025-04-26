#include <iostream>
using namespace std;

int fibonacci(int term){
    if(term == 1){
        return 0;
    }

    if(term == 2){
        return 1;
    }

    return (fibonacci(term - 1) + fibonacci(term - 2));
}

int fib(int term){
    int a = 0, b = 1;
    if(term == 1){
        return a;
    }
    if(term == 2){
        return b;
    }

    int answer;
    for(int i = 1; i <= term - 2; i++){
        answer = a + b;
        a = b;
        b = answer;
    }
    return answer;
}

int main(void){
    int term;
    cin >> term;

    cout << fibonacci(term) << endl;
    cout << fib(term) << endl;
}