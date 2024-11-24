// Halimatou Diaby
//Homework One Part One
//9/23/24

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    const int ARRAY_SIZE = 50;
    double alpha[ARRAY_SIZE];

    // First 25
    for (int i = 0; i < 25; i++) {
        alpha[i] = pow(i, 2);
    }

    // Last 25
    for (int i = 25; i < ARRAY_SIZE; i++) {
        alpha[i] = 3 * i;
    }

    // Print the array, 10 elements per line
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << fixed << setprecision(2) << alpha[i] << " ";
        if (i % 10 == 9) {
            cout << endl;
        }
    }

    return 0;
}