//Ivan Joseph Jaurigue
#include <iostream>
using namespace std;

void inputArray(int arr[], int &n, const string &name) {
    do {
        cout << name << " (max 10): ";
        cin >> n;
        if (n < 1 || n > 10) {
            cout << "Invalid input. Enter between 1-10 elements." << endl;
        }
    } while (n < 1 || n > 10);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
}

int main() {
    int arr1[10], arr2[10], merged[20], n1, n2;

    inputArray(arr1, n1, "First array");
    inputArray(arr2, n2, "Second array");

    for (int i = 0; i < n1; i++) merged[i] = arr1[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = arr2[i];

    cout << "Merged array:\n";
    for (int i = 0; i < n1 + n2; i++) cout << merged[i] << " ";

    return 0;
}