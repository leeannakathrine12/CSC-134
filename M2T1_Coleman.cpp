// CSC 134
// M2T1 - Reciept Maker
// Leeanna Kathrine Coleman
// 08/28/24

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//Variables
string name;
double meal_price;
double tax_rate = 0.08;
double tax_amount;
double total_price;

cout << fixed << setprecision(2);
//Welcome
cout << "Welcome to the Reciept Maker!\n";
cout << "What is your name?\n";
cin >> name;
cout << "How much was your meal?\n";
cin >> meal_price;

//Calculations
tax_amount = meal_price * tax_rate;
total_price = meal_price + tax_amount;

//Output Reciept
cout << "---------------------------------------\n";
cout << "Thank you for dining with us " << name << "!\n";
cout << "Your meal price is $" << meal_price << ".\n";
cout << "Your tax will be $" << tax_amount << ".\n";
cout << "Your total price is $" << total_price << ".\n";
cout << "Please come again!\n";
}