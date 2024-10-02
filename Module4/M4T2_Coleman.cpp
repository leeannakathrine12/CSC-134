// CSC 134
// M4T2 - Input Validation
// Leeanna Kathrine Coleman
// 10/02/24

#include <iostream>

using namespace std;

void counting();

int main()
{
    //counting();
    int num_players;
    const int MIN_PLAYERS = 1;
    const int MAX_PLAYERS = 4;
    cout << "How many players? (1-4) : \n";
    cin >> num_players;
    while (num_players < MIN_PLAYERS || num_players > MAX_PLAYERS) {
        cout << "Please choose between " << MIN_PLAYERS << " and " << MAX_PLAYERS << " players.\n";
        cout << "How many players? (1-4) : \n";
        cin >> num_players;
    }
    cout << "You're playing with " << num_players << " players.\n";

    string ready;
    do {
        cout << "waiting...\n";
        cout << "Are all players ready? (yes/no) ";
        cin >> ready;
    } while ( ready != "yes");

    return 0;
}

void counting () {
    cout << "Version 1: while\n";
    int num = 0;
    while (num < 5) {
        cout << num << endl;
        num++;
    }
    cout << "Verion 2: for\n";
    for (int n=0; n<5; n++) {
        cout << n << endl;
    }
}