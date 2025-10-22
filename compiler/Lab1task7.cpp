#include <iostream>

using namespace std;


string concatenateNames(string first, string last) {

    string fullName = "";


    for(int i = 0; first[i] != '\0'; i++) {

        fullName += first[i];
    }


    fullName += ' ';


    for(int i = 0; last[i] != '\0'; i++) {

        fullName += last[i];
    }

    return fullName;
}

int main() {

    string firstName, lastName;

    cout << "Enter First Name: ";
    cin >> firstName;

    cout << "Enter Last Name: ";
    cin >> lastName;


    string fullName = concatenateNames(firstName, lastName);

    cout << "Full Name: " << fullName << endl;

    return 0;
}

