#include <iostream>
using namespace std;

int main() {
    // define variables
    int a,b,c,d,e,f;
    a = 144;
    b = 289;
    c = 29;
    d = 696969;
    e = 53;
    f = 342;

    // print the values of the variables        
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e << endl;
    cout << "The value of f is: " << f << endl;

    // define largest to smallest variabbles
    int first_largest, second, third, fourth, fifth, sixth_smallest;
    first_largest = d;
    second = f;
    third = b;
    fourth = a;
    fifth = e;
    sixth_smallest = c;

    // print the  largest to smallest variables
    cout << "The value of the largest number is: " << first_largest  << endl;
    cout << "The value of second largest number is: " << second << endl;
    cout << "The value of third largest number is: " << third << endl;
    cout << "The value of fourth largest number is: " << fourth << endl;
    cout << "The value of fifth largest number is: " << fifth << endl;
    cout << "The value of the smallest number is: " << sixth_smallest << endl;
    return 0;
}