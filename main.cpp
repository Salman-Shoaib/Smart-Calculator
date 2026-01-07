#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

// Factorial Function
long long factorial(int n) {
    if (n < 0)
        throw "Factorial of negative number is not possible";

    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

// Basic Calculator Fuction 
double calculate(double a, double b, char op) {
    if (op == '/' && b == 0)
        throw "Division by zero is not allowed";

    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a, b);
        default:
            throw "Invalid operator";
    }
}

// Save Calculator History
void saveCalcHistory(string text) {
    ofstream file("calc_history.txt", ios::app);
    file << text << endl;
    file.close();
}

// Display Calculator History
void showCalcHistory() {
    ifstream file("calc_history.txt");
    string line;

    cout << "\n--- Calculator History ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

// SGPA Calculator
void gpaCalculator() {
    int courses;
    float gradePoint, creditHour;
    float totalPoints = 0, totalCredits = 0;

    cout << "\nEnter number of courses: ";
    cin >> courses;

    for (int i = 1; i <= courses; i++) {
        cout << "\nCourse " << i << endl;
        cout << "Enter grade points (e.g. 4.0, 3.5): ";
        cin >> gradePoint;
        cout << "Enter credit hours: ";
        cin >> creditHour;

        totalPoints += gradePoint * creditHour;
        totalCredits += creditHour;
    }

    if (totalCredits == 0) {
        cout << "Error: Total credit hours cannot be zero!\n";
        return;
    }

    float sgpa = totalPoints / totalCredits;
    cout << "\nYour SGPA is: " << sgpa << endl;

    // Save GPA History 
    ofstream file("gpa_history.txt", ios::app);
    file << "Courses: " << courses
         << " | Total Credits: " << totalCredits
         << " | SGPA: " << sgpa << endl;
    file.close();
}

// Display Gpa history
void showGPAHistory() {
    ifstream file("gpa_history.txt");
    string line;

    cout << "\n--- GPA History ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

// Main Function
int main() {
    int mainChoice;

    do {
        cout << "\n---- MAIN MENU ----\n";
        cout << "1. Calculator\n";
        cout << "2. GPA / CGPA Calculator\n";
        cout << "3. View Calculator History\n";
        cout << "4. View GPA History\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> mainChoice;

        try {
            if (mainChoice == 1) {
                int op;
                double n1, n2, result;

                cout << "\n--- Calculator Menu ---\n";
                cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
                cout << "5. Factorial\n6. Square Root\n7. Square\n8. Power\n";
                cout << "Enter operation: ";
                cin >> op;

                string history;

                switch (op) {
                    case 1:
                        cin >> n1 >> n2;
                        result = calculate(n1, n2, '+');
                        history = "Add: " + to_string(result);
                        break;

                    case 2:
                        cin >> n1 >> n2;
                        result = calculate(n1, n2, '-');
                        history = "Subtract: " + to_string(result);
                        break;

                    case 3:
                        cin >> n1 >> n2;
                        result = calculate(n1, n2, '*');
                        history = "Multiply: " + to_string(result);
                        break;

                    case 4:
                        cin >> n1 >> n2;
                        result = calculate(n1, n2, '/');
                        history = "Divide: " + to_string(result);
                        break;

                    case 5:
                        int x;
                        cin >> x;
                        result = factorial(x);
                        history = "Factorial: " + to_string(result);
                        break;

                    case 6:
                        cin >> n1;
                        if (n1 < 0) throw "Negative square root not allowed";
                        result = sqrt(n1);
                        history = "Square Root: " + to_string(result);
                        break;

                    case 7:
                        cin >> n1;
                        result = n1 * n1;
                        history = "Square: " + to_string(result);
                        break;

                    case 8:
                        cin >> n1 >> n2;
                        result = calculate(n1, n2, '^');
                        history = "Power: " + to_string(result);
                        break;

                    default:
                        throw "Invalid calculator option";
                }

                cout << "Result: " << result << endl;
                saveCalcHistory(history);
            }

            else if (mainChoice == 2) {
                gpaCalculator();
            }

            else if (mainChoice == 3) {
                showCalcHistory();
            }

            else if (mainChoice == 4) {
                showGPAHistory();
            }

            else if (mainChoice == 5) {
                cout << "Program Ended. Thank You!\n";
            }

            else {
                cout << "Invalid menu choice!\n";
            }
        }
        catch (const char* msg) {
            cout << "Exception: " << msg << endl;
        }

    } while (mainChoice != 5);

    system("pause");
    return 0;
}
