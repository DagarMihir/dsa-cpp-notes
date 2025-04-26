#include <iostream>

using namespace std;

int main(void){
    int totalAmount;
    cout << "Enter the total amount : " << endl;
    cin >> totalAmount;

    int num = 1;
    int note = 0;
    switch(num){
        case 1: note = totalAmount / 100;
                totalAmount -= note * 100;
                cout << "Number of 100 rupee notes required are : " << note << endl;
        
        case 2: note = totalAmount / 50;
                totalAmount -= note * 50;
                cout << "Number of 50 rupee notes required are : " << note << endl;

        case 3: note = totalAmount / 20;
                totalAmount -= note * 20;
                cout << "Number of 20 rupee notes required are : " << note << endl;

        case 4: note = totalAmount / 1;
                totalAmount -= note * 1;
                cout << "Number of 1 rupee notes required are : " << note << endl;
    }
}