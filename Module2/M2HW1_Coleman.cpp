// CSC 134
// M2HW1 - Gold
//Leeanna Kathrine Coleman
// 09/15/24

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    //Question 1
    cout << "Question 1\n";
    string name;
    double initial_account_balance;
    double deposit;
    double withdrawal;
    double final_account_balance;
    int account_number;

    cout << "Welcome to the Banking App!\n";
    cout << "What is your name?\n";
    getline(cin, name);
    cout << "What is your starting account balance?\n";
    cin >> initial_account_balance;
    cout << "How much would you like to deposit?\n";
    cin >> deposit;
    cout << "How much would you like to withdrawal\n";
    cin >> withdrawal;

    final_account_balance = initial_account_balance + deposit;
    final_account_balance = final_account_balance - withdrawal;

    cout << fixed << setprecision(2);

    cout << "Hello " << name << "!\n";
    cout << "Account Number: " << (account_number = rand() % 1000000000 + 100000) << "\n";
    cout << "Final Account Balance: $" << final_account_balance << "\n";
    cout << endl;

    //Question 2
    cout << "Question 2\n";
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    double length, width, height, volume, cost, charge, profit;

    cout << setprecision(2) << fixed << showpoint;

    cout << "Enter the dimensions of the crate (in feet): \n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    cout << "The volume of the crate is " << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << "\n";
    cout << "Charge to customer: $" << charge << "\n";
    cout << "Profit: $" << profit << "\n";
    cout << endl;

    //Question 3
    cout << "Question 3\n";
    int pizza_number, slice_number, visitors, total_slices, slices_needed, leftover;

    cout << "Welcome to the Pizza Slice Calculator!\n";
    cout << "How many pizzas did you order?\n";
    cin >> pizza_number;
    cout << "How many slices are in each pizza?\n";
    cin >> slice_number;
    cout << "How many visitors are coming?\n";
    cin >> visitors;

    total_slices = pizza_number * slice_number;
    slices_needed = visitors * 3;
    leftover = total_slices - slices_needed;

    cout << "You will have " << leftover << " pizza slices leftover.\n";
    cout << endl;

    //Question 4
    cout << "Question 4\n";
    string letsGo, school, team, cheerOne, cheerTwo;
    letsGo = "Let's go ";
    school = "FTCC";
    team = "Trojans";
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    cout << cheerOne << endl << cheerOne << endl << cheerOne << endl << cheerTwo;
    
    cout << endl;
}