// CSC 134
// M4T1 - Basic Loops
// Leeanna Kathrine Coleman
// 09/30/24

#include <iostream>

using namespace std;

void q1();
void q2();
int main()
{
    cout << "M4T1" << endl;
    q1();
    q2();
    return 0;
}


void q1(){
// Part 1 - Simple Loop
    cout << "Simple loop" << endl;
    int num = 1;
    while (num <= 5) {
        cout << "num = " << num << endl;
        num++;
    }
    cout << "Finished" << endl;
    return;
}

void q2(){
// Part 2 - Numbers and Squares
    const int MIN_NUMBER = 1,
              MAX_NUMBER = 10;
    int numb = MIN_NUMBER;
    cout << endl;
    cout << "Number\t\tNumber Squared" << endl;
    cout << "--------------------------------" << endl;
    while (numb <= MAX_NUMBER) {
        cout << numb << "\t\t" << numb * numb << endl;
        numb++;
    }
    return;
}
