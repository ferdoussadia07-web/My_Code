
#include <iostream>

using namespace std;


bool isValidIdentifier(string str) {

    if(!((str[0] >= 'A' && str[0] <= 'Z') ||
         (str[0] >= 'a' && str[0] <= 'z') ||
         str[0] == '_')) {

        return false;
    }

    for(int i = 1; str[i] != '\0'; i++) {

        if(!((str[i] >= 'A' && str[i] <= 'Z') ||
             (str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= '0' && str[i] <= '9') ||
             str[i] == '_')) {

            return false;

        }
    }

    return true;
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    if(isValidIdentifier(input))

        cout << "Valid Identifier" << endl;

    else

        cout << "Invalid Identifier" << endl;

    return 0;
}
