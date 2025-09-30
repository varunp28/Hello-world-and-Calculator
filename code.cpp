#include<iostream> // This line includes the iostream library which is used for input and output in C++.
using namespace std; // This line allows us to use standard library features without prefixing them with std::.
int main(){

    //NOTE: See arrows used in output(cout<<) and input(cin>>) carefully.

    std::cout << "Welcome to C++ Programming!" << endl; // if std was not defined in line 2.

    cout << "Hello World" << endl; //endline(endl) is used to print a new line.

    int x; // Declare an integer variable 'x' to store user input.
    cout << "Enter a number: ";
    cin >> x;  // Read an integer from user input and store it in 'x'.
    cout << "You entered: " << x << endl;

    // Calculator Program
    float a, b, sum, sub, mul, div; // Declare variables for two numbers and their results.
    cout << "Enter number 1: "; // Prompt user for first number
    cin >> a; // Read first number from user input
    cout << "Enter number 2: ";
    cin >> b;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    cout << "Sum: " << sum << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;
    cout << "Division: " << div << endl;
    return 0;   
}
/*
output:
Welcome to C++ Programming!
Hello World
Enter a number: 4
You entered: 4
Enter number 1: 
*/
