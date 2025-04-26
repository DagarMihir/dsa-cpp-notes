#include <iostream>
using namespace std;

// int is return type, power is name of the function, a and b are input parameters/arguments with their respective data typesfor the function
int power(int a, int b){
    int answer = 1;
    for(int i = 1; i <= b; i++){
        answer *= a;
    }
    return answer;
}

int power(){
    int a , b;
    cin >> a >> b;
    int answer = 1;
    for(int i = 1; i <= b; i++){
        answer *= a;
    }
    return answer;
}

bool isEven(int a){
    return ~a&1;
}

int main(void){
    int a, b;
    cin >> a >> b;

    // int answer = power(a, b);

    // cout << "The power of a is : " << answer << endl;
    // answer = power();
    // cout << "The power of a is : " << answer << endl;
    
    if(isEven(a)){
        cout << "a is even" << endl;
    }
    else{
        cout << "a is odd" << endl;
    }
}