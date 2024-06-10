#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
// Seed the random number generator
srand(time(nullptr));
// Generate a random number between 0 and 11 to represent days until expiration
int days_until_expiration = rand() % 12; // Adjusted to generate between 0 and 11
// Output the appropriate message based on the number of days until expiration
switch(days_until_expiration) {
case 0:
cout << "Your subscription has expired." << endl;
break;
case 1:
cout << "Your subscription expires within a day!" << endl;
cout << "Renew now and save 20%!" << endl;
break;
case 2 ... 5:
cout << "Your subscription expires in " << days_until_expiration << " days." << endl;
cout << "Renew now and save 10%!" << endl;
break;
case 6 ... 10:
cout << "Your subscription will expire soon. Renew now!" << endl;
break;
default:
cout << "You have an active subscription." << endl;
break;
}
return 0;
}