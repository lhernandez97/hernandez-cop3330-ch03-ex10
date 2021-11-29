/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luis Hernandez
 */

#include "std_lib_facilities.h"
using namespace std;

class Calculate {
    public:
        double getResults(string op, double a, double b) {
            //initialize return variable
            double result = 0;
            //check to see which operation was used
            if(op == "+") {
                result = a + b;
            }
            else if(op == "-") {
                result = a + b;
            }
            else if(op == "*"){
                result = a * b;
            }
            else if(op == "/"){
                if(b == 0) {
                    cout << "Cannot divide by zero.";
                    result = -1;
                }
                else {
                    result = a / b;
                }
            }
            else {
                cout << "This operation is not valid.";
                result = -1;
            }
            //return the result
            return result;
        }
};

int main() {
    //class object and necessary variables
    Calculate calc;
    double num1, num2;
    string op;
    //get the inputs from the user
    cin >> op;
    cin >> num1;
    cin >> num2;
    //get the result
    double total = calc.getResults(op, num1, num2);
    //print the results
    if(total == -1) {
        return 0;
    }
    else {
         cout << num1 << " " << op << " " << num2 << " " << "=" << " " << total;
    }
    //end main
    return 0;
}