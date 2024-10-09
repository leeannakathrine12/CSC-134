// CSC 134
// M4LAB2 - Craps Part 2
// Leeanna Kathrine Coleman
// 10/09/24

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool play_round();

int main()
{   
    int die1, die2, total;
    int seed;

    cout << "Welcome to the Craps Table." << endl;
    seed = time(0);
    srand(seed);
    bool is_winner;
    play_round();

    return 0;
}

int roll() {
    int die = (rand () % 6) + 1;
    return die;
}

bool play_round () {
    bool is_winner;
    int die1 = roll();
    int die2 = roll();
    int total = die1 + die2;
    cout << "You rolled a(n) " << die1 << " + " << die2 << " = " << total << endl;

    if (total == 7 || total == 11) {
        cout << "You Win! :)" << endl;
        is_winner = true;
    }
    else if (total == 2 || total == 3 || total == 12) {
        cout << "You Lose! :(" << endl;
        is_winner = false;
    }
    else {
        cout << "Your point is : " << total << endl;
    }

    return is_winner;
}

