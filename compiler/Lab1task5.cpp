
#include <iostream>

using namespace std;


float findAverage(int arr[], int n) {

    int sum = 0;

    for(int i = 0; i < n; i++) {

        sum += arr[i];
    }

    float average = (float)sum / n;

    return average;
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


    float result = findAverage(arr, n);
    cout << "Average value of the elements: " << result << endl;

    return 0;
}
