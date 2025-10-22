#include <iostream>
using namespace std;


void findOperators(string expr) {

    for (int i = 0; expr[i] != '\0'; i++) {

        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' ||
            expr[i] == '/' || expr[i] == '%' || expr[i] == '=') {

              cout << "The operator we get : " << expr[i] << endl;
        }
    }
}

int main() {
    string expression;

    cout << "Enter Your Expression: ";
    cin >> expression;


    findOperators(expression);

    return 0;
}
