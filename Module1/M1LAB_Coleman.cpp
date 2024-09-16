// CSC 134
// M1LAB - Apple Orhcard
// Leeanna Kathrine Coleman
// 08/26/24

#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
  // Set up variables
  string first_name;
  string last_name;
  int num_apples;
  int num_apples_purchasing;
  double price_per_apple;
  double total_price;

  // Get user input
  cout << "What is your first name? \n";
  cin >> first_name;
  cout << "What is your last name? \n";
  cin >> last_name;
  cout << "How many apples in stock? \n";
  cin >> num_apples;
  cout << "How much does an apple cost? \n";
  cin >> price_per_apple;

  cout << fixed << setprecision(2);
  
  // Welcome
  cout << "--------------------------------------\n";
  cout << "Welcome to the ";
  cout << first_name << " " << last_name << "'s Orchard! \n";
  cout << "We have " << num_apples << " apples. \n";
  cout << "Each apple costs $" << price_per_apple << ". \n";

  // Ask questions
  cout << "How many apples would you like to purchase?\n";
  cin >> num_apples_purchasing;

  // Calculations and checking if the input is over the original ammount of apples.
  if (num_apples_purchasing <= num_apples) {
    total_price = num_apples_purchasing * price_per_apple;
    
    // Give Answers
    cout << "Your " << num_apples_purchasing << " apples will cost $" << total_price << ".\n";
  }
  else {
    cout << "We don't have that many apples.\n";
    cout << "Goodbye.";
  }

}