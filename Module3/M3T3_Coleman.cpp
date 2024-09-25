// CSC 134
// M3T3 - Craps
// Leeanna Kathrine Coleman
// 09/25/24

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int roll() {
    int die = (rand () % 6) + 1;
    return die;
}

int main()
{
    int die1, die2, total;
    int seed;

    cout << "Welcome to the Craps Table." << endl;
    //cout << "Enter your lucky number: " << endl;
    //cin >> seed;
    seed = time(0);
    srand(seed);
    //die1 = (rand()% 6) + 1;
    //die2 = (rand()% 6) + 1;
    die1 = roll();
    die2 = roll();

    total = die1 + die2;
    cout << "You rolled a " << die1 << " + " << die2 << " = " << total << endl;

    if (total == 7 || total == 11) {
        cout << "You Win! :)" << endl;
    }
    else if (total == 2 || total == 3 || total == 12) {
        cout << "You Lose! :(" << endl;
    }
    else {
        cout << "Your point is : " << total << endl;
    }

    return 0;
}
