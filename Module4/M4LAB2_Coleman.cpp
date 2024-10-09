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
    is_winner = play_round();
    if (is_winner) {
        cout << "You Won! :)" << endl;
    }
    else {
        cout << "You Lost! :(" << endl;
    }

    return 0;
}

int roll() {
    int die = (rand () % 6) + 1;
    return die;
}

bool play_round () {
    bool is_winner = false;
    int die1 = roll();
    int die2 = roll();
    int point;
    int total = die1 + die2;
    cout << "You rolled a(n) " << die1 << " + " << die2 << " = " << total << endl;

    if (total == 7 || total == 11) {
        is_winner = true;
    }
    else if (total == 2 || total == 3 || total == 12) {
        is_winner = false;
    }
    else {
        cout << "Your point is : " << total << endl;
        point = total;
        do {
            total = roll() + roll();
            cout << "Come on lucky " << point << "! " << "Rolled: " << total << endl;
            if (total == 7) {
                is_winner = false;
            }
            else if (total == point) {
                is_winner = true;
            }
        } while (total !=7 && total != point);
    }

    return is_winner;
}

