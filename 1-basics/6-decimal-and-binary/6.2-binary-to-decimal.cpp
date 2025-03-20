#include <cmath>
#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  int answer = 0;
  int i = 0;
  while (n != 0) {

    int digit =
        n %
        10; // if we had done bit = n & 1, then we would have been finding the
            // bits for the binary conversion of n (which is input as decimal),
            // and not for the as it is binary representation of the given n
    if (digit == 1) {
      answer = answer + pow(2, i);
    }

    n = n / 10;
    i++;
  }

  cout << "Answer: " << answer << endl;
}
