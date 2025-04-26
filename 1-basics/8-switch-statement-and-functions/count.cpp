#include <iostream>
using namespace std;

void count(int num){
    for(int i = 1; i <= num; i++){
        cout << i << " ";
    }
    cout << endl;
    return; // return of flow, not returning anything to the main function // not needed 
}

int main(void){
    int num;
    cin >> num;

    count(num);

    return 0;
}