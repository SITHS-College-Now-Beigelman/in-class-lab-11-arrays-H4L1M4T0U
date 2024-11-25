// Halimatou Diaby
//Homework One Part One
//9/23/24



#include <iostream>
#include <iomanip>
#include <cstdlib> // Required for rand()

using namespace std;

int main() {
    const int ARRAY_SIZE = 50;
    double alpha[ARRAY_SIZE];

    // Initialize first 25 components as squares of the index
    for (int i = 0; i < 25; i++) {
        alpha[i] = i * i;
    }

    // Initialize last 25 components as 3 times the index
    for (int i = 25; i < ARRAY_SIZE; i++) {
        alpha[i] = 3 * i;
    }

    // Output the array values (10 elements per line)
    cout << "Array alpha initialized with squares and multiples of 3:" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << setw(8) << alpha[i];
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;

    // Fill the array with random numbers between 1 and 100 (no seeding)
    for (int i = 0; i < ARRAY_SIZE; i++) {
        alpha[i] = rand() % 100 + 1; // Random number between 1 and 100
    }

    // Output the random array values (10 elements per line)
    cout << "Array alpha filled with random numbers (1-100):" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << setw(8) << alpha[i];
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;

    // Compute the average of the elements
    double sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += alpha[i];
    }
    double average = sum / ARRAY_SIZE;
    cout << "Average of array elements: " << average << endl;

    // Count how many elements are exactly equal to 100
    int count_100 = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (alpha[i] == 100) {
            count_100++;
        }
    }
    cout << "Number of elements exactly equal to 100: " << count_100 << endl;

    return 0;
}



/*OUTPUT:
Array alpha initialized with squares and multiples of 3:
       0       1       4       9      16      25      36      49      64      81
     100     121     144     169     196     225     256     289     324     361
     400     441     484     529     576      75      78      81      84      87
      90      93      96      99     102     105     108     111     114     117
     120     123     126     129     132     135     138     141     144     147

Array alpha filled with random numbers (1-100):
      80       9      75      88       8      70      40      63      13      59
      80      34      33      85      22      37      80      61      12      26
      86      29       3      66      50      24      52     100      97      68
      46      83      42      66      61      64      54      30      40      63
      39      64       6      54      17      85      89      74      81      34

Average of array elements: 52.84
Number of elements exactly equal to 100: 1*/