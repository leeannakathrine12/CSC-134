// CSC 134
// M2LAB1
// Leeanna Kathrine Coleman
// 09/14/24

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    //Declare Variables
    double length, width, height, volume, cost, charge, profit;

    cout << setprecision(2) << fixed << showpoint;

    //Get information
    cout << "Enter the dimensions of the crate (in feet): \n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    //Calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    //Show volume and price
    cout << "The volume of the crate is " << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << ".\n";
    cout << "Charge to customer: $" << charge << ".\n";
    cout << "Profit: $" << profit << ".\n";
    return 0;
}