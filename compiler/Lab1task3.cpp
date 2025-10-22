#include <iostream>

using namespace std;


void checkComment(string input) {

    int len = 0;

    while(input[len] != '\0') {

        len++;
    }

    if(len >= 2 && input[0] == '/' && input[1] == '/') {

        cout << "This is a Single-line Comment." << endl;

    }

    else if(len >= 4 && input[0] == '/' && input[1] == '*' &&
            input[len-2] == '*' && input[len-1] == '/') {

        cout << "This is a Multi-line Comment." << endl;

    }

    else {

        cout << "This is NOT a Comment." << endl;
    }
}

int main() {

    string input;

    cout << "Enter a line: ";
    getline(cin, input);


    checkComment(input);

    return 0;
}
