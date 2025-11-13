#include <bits/stdc++.h>

using namespace std;

bool isValidIdentifier(string str) {

    if (!((str[0] >= 'A' && str[0] <= 'Z') ||
          (str[0] >= 'a' && str[0] <= 'z') ||
          str[0] == '_')) {
        return false;
    }

    for (int i = 1; str[i] != '\0'; i++) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= '0' && str[i] <= '9') ||
              str[i] == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    ifstream file("sample.txt");   // open file directly

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << " : ";
            cout<<"hlfslakj"<endl;

            //if (isValidIdentifier(line)) {
                //cout << "Identifier" << endl;
            //} else {
                //cout << "Not Identifier" << endl;
            //}
        }

        file.close();  // close the file
    } else {
        cout << "Error: Could not open file!" << endl;
    }

    return 0;
}
