// CSC 134
// M3LAB2
// Leeanna Kathrine Coleman
// 09/27/24

#include <iostream>
using namespace std;

int main() {
    
    int studentGrade;

    cout << "Please enter your numerical grade: " << endl;
    cin >> studentGrade;

    
    if (studentGrade >= 90 && studentGrade <= 100) {
        cout << "Your Letter Grade is: A" << endl;
    } else if (studentGrade >= 80 && studentGrade <= 89) {
        cout << "Your Letter Grade is: B" << endl;
    } else if (studentGrade >= 70 && studentGrade <= 79) {
        cout << "Your Letter Grade is: C" << endl;
    } else if (studentGrade >= 60 && studentGrade <= 69) {
        cout << "Your Letter Grade is: D" << endl;
    } else if (studentGrade >= 0 && studentGrade <= 59) {
        cout << "Your Letter Grade is: F" << endl;
    } else {
    
        cout << "Invalid grade. Please enter a grade between 0 and 100." << endl;
    }

    return 0;
}
