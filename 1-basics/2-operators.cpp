// int/int gives int, float/int gives float, double/int gives double (unless type casted to some other type)

#include <iostream>

using namespace std;

int main(){

/*
    cout << 2/5 << endl;
    cout << 2.0/5 << endl;

    int a = 2.0 / 5; //type casted as integer
    cout << a << endl;

    float b = 2.0 / 5;
    cout << b << endl;


    int a = 2;
    int b = 3;

    bool first = (a == b);
    cout << first << endl;

    bool second = (a > b);
    cout << second << endl;

    bool third = (a < b);
    cout << third << endl;

    bool fourth = (a >= b);
    cout << fourth << endl;

    bool fifth = (a <= b);
    cout << fifth << endl;

    bool sixth = (a != b);
    cout << sixth << endl;

*/

    int a = 21;
    cout << !a << endl;

    int b = 0;
    cout << !b << endl;
}