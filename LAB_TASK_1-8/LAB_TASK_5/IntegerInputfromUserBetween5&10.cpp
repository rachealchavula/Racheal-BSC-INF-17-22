#include <iostream>
#include <limits>
using namespace std;
int main() {
int input;
while (true) {
cout << "Please enter an integer value between 5 and 10: ";
if (!(cin >> input) || input < 5 || input > 10) {
cout << "Invalid input. Please enter an integer value between 5 and 10." << endl;
cin.clear(); // Clear error flags
cin.ignore(numeric_limits<int>::max(), '\n'); // Ignore up to max characters or until a newline is found
} else {
cout << "Your input value " << input << " has been accepted." << endl;
break; // Exit the loop if input is valid
}
}
return 0;
}