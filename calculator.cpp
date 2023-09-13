#include <iostream>
using namespace std;

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Cannot divide by zero." << endl;
        return 0.0;
    }
}

int main() {
    double num1, num2;
    int choice;

    cout << "Welcome to the Arithmetic Calculator!" << endl;
    
    do {
        cout << "Select operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers"<<endl;
            cout<<"Number 1:";
            cin >> num1;
            cout<<"Number 2:";
            cin>> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Exiting calculator." << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid operation." << endl;
        }
    } while (choice != 5);

    return 0;
}
