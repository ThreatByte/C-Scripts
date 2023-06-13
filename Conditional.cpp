// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped

#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  // checks if the number is positive
  if (number == 10) {
    cout << "You entered a positive integer: " << number << endl;
    cout << "Statment 1 is executed";
  }
  else if (number == 8){
    cout << "Statment 2 is executed.";
  }
  else {
    cout << "This statement is executed.";
  }

  return 0;
}