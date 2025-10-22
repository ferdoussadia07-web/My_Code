#include <iostream>

using namespace std;


bool isNumericConstant(string str) {

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] < '0' || str[i] > '9') {

            return false;
        }
    }
       return true;
}

int main() {
    string num;

    cout << "Enter a number: ";
    cin >> num;


    if (isNumericConstant(num)) {

        cout << "This number is Numeric constant" << endl;
    }
    else {

        cout << "This number is not numeric" << endl;
    }

    return 0;
}

