#include <iostream>
using namespace std;

int main() {

  // int a, b;
  // cout << "Enter the value of a : ";
  // cin >> a;
  // cout << "Enter the value of b : ";
  // cin >> b;
  // if (a > b){
  //     cout << "A is greater" << endl;
  // }
  // else if (a < b){
  //     cout << "B is greater" << endl;
  // }
  // else{
  //     cout << "A and B are equal." << endl;
  // }

  // int a;
  // cout << "Enter the value of a : ";
  // cin >> a;
  // if(a > 0){
  //     cout << "A is positive." << endl;
  // }
  // else if(a < 0){
  //     cout << "A is negative." << endl;
  // }
  // else {
  //     cout << "A is Zero." << endl;
  // }

  // Homework - 1 : to check if a given character is uppercase, lowercase or a
  // digit
  //  char ch;
  //  cout << "Enter a character : ";
  //  cin >> ch;

  // if(ch >= 'a' && ch <= 'z'){
  //     cout << "The given character is a lowercase alphabet." << endl;
  // }
  // else if(ch >= 'A' && ch <= 'Z'){
  //     cout << "The given character is an uppercase alphabet." << endl;
  // }
  // else if(ch >= '0' && ch <= '9'){
  //     cout << "The given character is a digit." << endl;
  // }
  // else {
  //     cout << "The given character is some other character." << endl;
  // }

  // int n;
  // cin >> n;

  // int i = 1;

  // while(i <= n){
  //     cout << i << " ";
  //     i = i + 1;
  // }

  // int n;
  // cin >> n;

  // int i = 1;
  // int sum = 0;

  // while(i <= n){
  //     sum = sum + i;
  //     i = i + 1;
  // }

  // cout << "The sum is : " << sum << endl;

  // Homework - 2 : find sum from 1 to n, of only even numbers

  // int n;
  // cin >> n;
  // int i = 2;
  // int sum = 0;
  // while(i <= n){
  //     sum = sum + i;
  //     i = i + 2;
  // }
  // cout << "Sum of even numbers from 1 to n is : " << sum << endl;

  // Homework - 3 : fahrenheit to celsius table

  // float f;
  // cout << "Enter the temperature in fahrenheit : ";
  // cin >> f;
  // float c = ((f - 32)*5)/9;
  // cout << "The temperature in celcius is : " << c << endl;

  // Prime num or not

  int n;
  cin >> n;

  int i = 2;
  while (i < n) {
    if (n % i == 0) {
      cout << "Not Prime for " << i << endl;
    } else {
      cout << "Prime for " << i << endl;
    }
    i = i + 1;
  }
}
