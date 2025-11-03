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

void findOperators(string expr) {

    for (int i = 0; expr[i] != '\0'; i++) {

        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' ||
            expr[i] == '/' || expr[i] == '%' || expr[i] == '=') {

              cout << "The operator we get : " << expr[i] << endl;
        }
    }
}

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

void findMinMax(int arr[], int n, int &minVal, int &maxVal) {

    minVal = arr[0];
    maxVal = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] < minVal) {

            minVal = arr[i];
        }
        if(arr[i] > maxVal) {

            maxVal = arr[i];
        }
    }
}

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

float findAverage(int arr[], int n) {

    int sum = 0;

    for(int i = 0; i < n; i++) {

        sum += arr[i];
    }

    float average = (float)sum / n;

    return average;
}

int main(){
    cout<<"Enter 0 to Exit.";
    cout<<"Enter 1 to ";
    while(1){
        int x;
        cin>>x;
        if(x == 0){
            break;
        }
        else if(x == 1){
            string num;

            cout << "Enter a number: ";
            cin >> num;
            if (isNumericConstant(num)) {

                cout << "This number is Numeric constant" << endl;
            }
            else {

                cout << "This number is not numeric" << endl;
            }
        }
        else if(x == 2){
            string expression;
            cout << "Enter Your Expression: ";
            cin >> expression;
            findOperators(expression);
        }
        else if(x == 3){
            string input;
            cout << "Enter a line: ";
            cin>>input;

            checkComment(input);
        }
        else if(x == 4){
            string input;

            cout << "Enter a string: ";
            cin >> input;

            if(isValidIdentifier(input))

                cout << "Valid Identifier" << endl;

            else

                cout << "Invalid Identifier" << endl;

        }

        else if(x==5){
           int n;
            cout << "Enter number of elements: ";
            cin >> n;

            int arr[100];

            cout << "Enter " << n << " elements:" << endl;
            for(int i = 0; i < n; i++) {
                cin >> arr[i];
            }


            float result = findAverage(arr, n);
            cout << "Average value of the elements: " << result << endl;

        }

        else if(x==6){
        int n;
            cout << "Enter number of elements: ";
            cin >> n;

            int arr[100];
            cout << "Enter " << n << " elements:" << endl;

            for(int i = 0; i < n; i++) {

                cin >> arr[i];
            }

            int minVal, maxVal;


            findMinMax(arr, n, minVal, maxVal);

            cout << "Minimum value: " << minVal << endl;
            cout << "Maximum value: " << maxVal << endl;

        }

        else if(x==7){
            string firstName, lastName;

            cout << "Enter First Name: ";
            cin >> firstName;

            cout << "Enter Last Name: ";
            cin >> lastName;


            string fullName = concatenateNames(firstName, lastName);

            cout << "Full Name: " << fullName << endl;



        }
    }
    return 0;
}
