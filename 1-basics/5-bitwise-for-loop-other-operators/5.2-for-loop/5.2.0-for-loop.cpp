#include <iostream>
using namespace std;

int main() {

  // for loop -> for(intilization(can be more than one); condition(can be more
  // than one); updation(can be more than one)){statements}

  int n;
  cout << " enter the value of n" << endl;
  // cin >> n;

  cout << "printing count from 1 to n" << endl;
  int i = 1;
  for (;;) {
    if (i <= n) {
      cout << i << endl;
    } else {
      break;
    }
    i++;
  }

  // break : used to break out of the current loop

  for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--) {
    cout << a << " " << b << " " << c << endl;
  }

  for (int i = 0; i < 5; i++) {

    cout << " HI " << endl;
    cout << " Hey " << endl;
    continue;

    cout << "Reply toh karde " << endl;
  }

  // continue : used to skip the present iteration
  return 0;
}
