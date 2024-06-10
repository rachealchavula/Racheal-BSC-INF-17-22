#include <iostream>
using namespace std;
float AREAOFTRIANGLE(float base, float height);
float AREAOFRECTANGLE(float length, float width);
float AREAOFRECTANGLE(float side);
int main() {
while (true) {
cout << "Please select a shape to calculate the area:\n";
cout << "1. Triangle\n";
cout << "2. Rectangle\n";
cout << "3. Square\n";
cout << "4. Quit program\n";
int selection;
cout << "Enter selection : ";
cin >> selection;
float area;
if (selection== 1) {
float base, height;
cout << "Enter the base of the triangle: ";
cin >> base;
cout << "Enter the height of the triangle: ";
cin >> height;
area = AREAOFTRIANGLE(base, height);
cout << "The area of the triangle is: " << area << endl;
} else if (selection == 2) {
float length, width;
cout << "Enter the length of the rectangle: ";
cin >> length;
cout << "Enter the width of the rectangle: ";
cin >> width;
area = AREAOFRECTANGLE(length, width);
cout << "The area of the rectangle is: " << area << endl;
} else if (selection == 3) {
float side;
cout << "Enter the side length of the square: ";
cin >> side;
area = AREAOFRECTANGLE(side);
cout << "The area of the square is: " << area << endl;
} else if (selection == 4) {
cout << "Exiting the program. Goodbye!" << endl;
break;
} else {
cout <<"Your input was:" " " <<selection<< " " "which is an invalid input" << endl;
cout<<"please enter an invalid input!!"<<endl;
}
}
return 0;
}
float AREAOFTRIANGLE(float base, float height) {
return 0.5 * base * height;
}
float AREAOFRECTANGLE(float length, float width) {
return length * width;
}
float AREAOFRECTANGLE(float side) {
return side * side;
}