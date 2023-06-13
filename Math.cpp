#include <iostream>
using namespace std;

int main(){
    int a, b;
    a = 7;
    b = 2;

    //print sum of a and b
    cout << "a + b = " << (a+b) << endl;
    //print difference a and b
    cout << "a - b = " << (a-b) << endl;
    //print product a and b
    cout << "a * b = " << (a*b) << endl;
    //print division of a by b
    cout << "a / b = " << (a/b) << endl;
    //print modulo of a by b
    cout << "a % b = " << (a%b) << endl;

    //Increment a
    a++;

    //Decrement b
    b--;

    cout << "The number of a is: " << a << endl;
    cout << "The number of b is: " << b << endl;

    //7+2
    a+=b;

    cout << "The number of a is: " << a << endl;

}