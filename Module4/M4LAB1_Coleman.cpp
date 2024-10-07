// CSC 134
// M4LAB1
// Leeanna Kathrine Coleman
// 10/07/24

#include <iostream>

using namespace std;

int main() {
    cout << "M4LAB1\n";
    string emoji = "🐙";
    //cout << emoji << endl;

    // print row
    for (int i = 0; i < 9; i++) {
        cout << emoji << " ";
    }
    cout << endl;
    // print column
    for (int j = 0; j < 9; j++) {
        cout << emoji << endl;
    }

    cout << endl << endl;
    cout << "Full Version: " << endl;
    const int ROWS = 9;
    const int COLS = 9;

    // put both together
    for (int j = 0; j < ROWS; j++) {
        for (int i = 0; i < COLS; i++) {
        cout << emoji << " ";
        }
    cout << endl;
    }
}