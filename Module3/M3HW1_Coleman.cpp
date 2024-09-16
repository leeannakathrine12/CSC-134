// CSC 134
// M3HW1 - Gold
// Leeanna Kathrine Coleman
// 09/14/24

#include <iostream>
#include <iomanip>
using namespace std;

int main() { 

//Question 1
string userinput;
cout << "Question 1 \n";
cout << "Hello, I’m a C++ program! \n";
cout << "Do you like me? Please type yes or no. \n";
cin >> userinput;

if (userinput == "yes")
{
    cout << "That's great! I'm sure we'll get along.\n";
}
else if (userinput == "no")
{
    cout << "Well, maybe you'll learn to like me later.\n";
}
else
{
    cout << "If you're not sure… that's OK.\n";
}
cout << endl;

//Question 2
cout << "Question 2 \n";
string name;
int dining;
double meal_price;
double tax_rate = 0.08;
double tax_amount;
double total_price;
double tip_rate = 0.15;
double tip_amount;

cout << fixed << setprecision(2);
//Welcome
cout << "Welcome to the Reciept Maker!\n";
cout << "What is your name?\n";
getline(cin, name);
cout << "How much was your meal?\n";
cin >> meal_price;
cout << "Are you dining in or getting takeout?\n";
cout << "Please enter 1 for dine in, 2 for takeout.\n";
cin >> dining;

if (dining == 1)
{
    tax_amount = meal_price * tax_rate;
    tip_amount = meal_price * tip_rate;
    total_price = meal_price + tax_amount + tip_amount;

    cout << "---------------------------------------\n";
    cout << "Thank you for dining with us " << name << "!\n";
    cout << "Your meal price is $" << meal_price << ".\n";
    cout << "Your tax will be $" << tax_amount << ".\n";
    cout << "Your tip will be $" << tip_amount << ".\n";
    cout << "Your total price is $" << total_price << ".\n";
    cout << "Please come again!\n";
}
else if (dining == 2)
{
    tax_amount = meal_price * tax_rate;
    total_price = meal_price + tax_amount;

    cout << "---------------------------------------\n";
    cout << "Thank you for dining with us " << name << "!\n";
    cout << "Your meal price is $" << meal_price << ".\n";
    cout << "Your tax will be $" << tax_amount << ".\n";
    cout << "Your total price is $" << total_price << ".\n";
    cout << "Please come again!\n";
}
else
{
    cout << "I guess you're not ordering...\n";
}
cout << endl;

//Question 3
cout << "Question 3 \n";
int user_decision;
cout << "Welcome to the Humpty Dumpty Simulator!\n";
cout << "You are Humpty Dumpty the egg. Your legs are getting tired.\n" << "Do you:\n" << "[1] Sit on the wall\n" << "[2] Sit right where you are\n";
cin >> user_decision;
if (user_decision == 1)
{
    cout << "You had a big fall. The king's horses and men tried to put you back together, but to no avail.\n"  << "GAME OVER.\n";
}
else if (user_decision == 2)
{
    cout << "You sat right in the middle of the king's men's shooting range!\n" << "Do you:\n" << "[1] Accept your fate\n" << "[2] Dodge for your life!\n";
    cin >> user_decision;
    if (user_decision == 1)
    {
        cout << "Turns out the king's men have terrible aim. You made it out safely!\n" << "YOU WIN!\n";
    }
    else if (user_decision == 2)
    {
        cout << "Turns out that you're very uncoordinated. You walk right into the line of an arrow!\n" << "GAME OVER.\n";
    }
    else
    {
        cout << "Invalid Answer. You stood still and immediately got hit by one of the king's men's arrows.\n" << "GAME OVER.\n";
    }
}
else
{
cout << "Invalid Answer.\n" << "GAME OVER.\n";
}
 
cout << endl;

//Question 4
cout << "Question 4 \n";
int random_num_one = 0;
int random_num_two = 0;
int answer;
cout << "Welcome to Math Practice! \n";
cout << "What is " << (random_num_one = rand()%11) << " plus " << (random_num_two = rand()%11) << "?\n";
cin >> answer;
if (answer == random_num_one + random_num_two)
{
    cout << "Correct!\n";
}
else
{
    cout << "Incorrect.\n";
}

}