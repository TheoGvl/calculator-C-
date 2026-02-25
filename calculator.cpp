#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Εισάγετε τον τελεστή της πράξης (+, -, *, /): ";
    cin >> operation;

    cout << "Δώστε δύο αριθμούς (χωρισμένους με κενό): ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            cout << "Αποτέλεσμα: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Αποτέλεσμα: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Αποτέλεσμα: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Αποτέλεσμα: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "Σφάλμα: Δεν ορίζεται διαίρεση με το μηδέν!" << endl;
            }
            break;
        default:
            cout << "Σφάλμα: Ο τελεστής δεν είναι σωστός." << endl;
            break;
    }

    return 0;
}