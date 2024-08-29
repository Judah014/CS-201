//Judah wangia
//CS 201 (2024)
//8/28/2024

#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <cmath>   // For sqrt()
using namespace std;

// Function to check if a string is numeric
bool isNumeric(const string &str) {
    for (char const &c : str) {
        if (!isdigit(c) && c != '-') { // Allow digits and a negative sign at the start
            return false;
        }
    }
    return true;
}

// Function to calculate the distance from the origin (0, 0)
float calculateDistance(int x, int y) {
    return sqrt(x * x + y * y);
}

int main() {
    // Set up variables used
    string in1, in2, in3, in4;
    int x1, y1, x2, y2;
    float dist1, dist2;
    char choice;

    // Get choice from user ‘e’ to enter values or ‘g’ to generate values using random values
    cout << "How would you like to get the 4 values? (Enter 'e' to input manually, 'g' to generate randomly): ";
    cin >> choice;

    if (choice == 'e' || choice == 'E') {
        // Get input if choice is 'e'
        cout << "Please enter 4 values: ";
        cin >> in1 >> in2 >> in3 >> in4;

        // Verify input to make sure it is numeric
        if (!isNumeric(in1) || !isNumeric(in2) || !isNumeric(in3) || !isNumeric(in4)) {
            cout << "Error: All inputs must be numeric." << endl;
            return 1;
        }

        // Convert string inputs to integers
        x1 = stoi(in1);
        y1 = stoi(in2);
        x2 = stoi(in3);
        y2 = stoi(in4);

        // Check if the values are between -10 and 10 inclusive
        if (x1 < -10 || x1 > 10 || y1 < -10 || y1 > 10 || x2 < -10 || x2 > 10 || y2 < -10 || y2 > 10) {
            cout << "Error: All inputs must be between -10 and 10." << endl;
            return 1;
        }
    } else if (choice == 'g' || choice == 'G') {
        // Generate 4 random numbers between -10 & 10
        srand(time(0));
        x1 = rand() % 21 - 10;  // Generates a number between -10 and 10
        y1 = rand() % 21 - 10;
        x2 = rand() % 21 - 10;
        y2 = rand() % 21 - 10;

        cout << "Generated values: " << x1 << ", " << y1 << ", " << x2 << ", " << y2 << endl;
    } else {
        cout << "Error: Invalid choice." << endl;
        return 1;
    }

    // EndIf

    // Print both points
    cout << "Point 1: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Point 2: (" << x2 << ", " << y2 << ")" << endl;

    // Calculate dist1 & dist2
    dist1 = calculateDistance(x1, y1);
    dist2 = calculateDistance(x2, y2);

    // Determine which point is closer and print
    if (dist1 < dist2) {
        cout << "Point 1 is closer to the origin with a distance of " << dist1 << endl;
    } else if (dist2 < dist1) {
        cout << "Point 2 is closer to the origin with a distance of " << dist2 << endl;
    } else {
        cout << "Both points are equidistant from the origin with a distance of " << dist1 << endl;
    }

    return 0;
}
