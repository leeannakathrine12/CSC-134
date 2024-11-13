// CSC 134
// M6LAB1 - "Raspberry Roulette"
// Leeanna Kathrine Coleman
// 11/13/24

#include <iostream>
using namespace std;

const int NUM_ROUNDS = 8;
const int RED = 1; // live
const int BLACK = 0; //blank

int main () {
    //load the chamber
    int chamber[] = {RED, BLACK, RED};
    for (int round: chamber) {
        if (round == RED) {
            cout << "RED ";
        }
        if (round == BLACK) {
            cout << "BLACK ";
        }
    }
    cout << endl;
}