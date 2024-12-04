// CSC 134
// M6LAB2 - "Raspberry Roulette Vector"
// Leeanna Kathrine Coleman
// 11/28/24

#include <iostream>
#include <vector>
using namespace std;

const int RED = 1;
const int BLACK = 0; 

int main() {
    vector<int> chamber = {};

    chamber.push_back(RED);
    chamber.push_back(BLACK);
    chamber.push_back(RED);
    
    for (int round : chamber) {
        if (round == RED) {
            cout << "RED ";
        }
        if (round == BLACK) {
            cout << "BLACK ";
        }
    }
    cout << endl;
    return 0;
}