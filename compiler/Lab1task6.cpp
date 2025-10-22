#include <iostream>

using namespace std;


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

int main() {
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

    return 0;
}

