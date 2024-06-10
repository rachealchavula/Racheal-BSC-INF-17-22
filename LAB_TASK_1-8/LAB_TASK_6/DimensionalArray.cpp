#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    while (true) {
        // Prompt user for dimensions of the array
        cout << "Enter the number of rows (max 3): ";
        cin >> rows;
        if (rows > 3) {
            cout << "Number of rows exceeds maximum allowed (3). Please try again." << endl;
            continue;
        }

        cout << "Enter the number of columns (max 3): ";
        cin >> columns;
        if (columns > 3) {
            cout << "Number of columns exceeds maximum allowed (3). Please try again." << endl;
            continue;
        }

        // Dynamically allocate memory for the 2D array and assign values
        double array[3][3];
        cout << "Enter values for the array:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << "Enter value for element (" << i << "," << j << "): ";
                cin >> array[i][j];
            }
        }

        // Output the values of each element of the array
        cout << "The values of the array are:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }

        // Terminate the loop after displaying the array values
        break;
    }

    return 0;
}

