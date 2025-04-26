#include <iostream>
#include <vector>
using namespace std;

void printBinary(int num) {
    const int BITS = 32;
    vector<int> binary(BITS);

    // Handle two's complement representation
    for (int i = BITS - 1; i >= 0; --i) {
        binary[i] = num & 1;
        num >>= 1;
    }

    // Print the binary representation
    for (int bit : binary) {
        cout << bit;
    }
    cout << endl;
}

int main() {
    int num;
    cin >> num;
    cout << "Binary of " << num << " is: ";
    printBinary(num);
    return 0;
}
