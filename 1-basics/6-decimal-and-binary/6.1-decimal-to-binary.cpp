#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int n);

int main() {

  int n;
  cout << "Enter value of n: ";
  cin >> n;

  cout << "Answer: " << decimalToBinary(n) << endl;
}

int decimalToBinary(int n) {
  int answer = 0;
  int i = 0;
  while (n != 0) {
    int digit = n % 2; // we can also do n & 1

    answer = (digit * pow(10, i)) + answer;

    n = n >> 1;
    i++;
  }
  return answer;
}
// here we store ans in int, so if we give some integer like 10000 then some
// garbage comes, because the answer exceeds the range of the int datatype, so
// we should store in a string or an array.

