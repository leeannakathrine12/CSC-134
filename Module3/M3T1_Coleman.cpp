// CSC 134
// M3T1
// Leeanna Kathrine Coleman
// 09/16/24

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double width1, width2, length1, length2;
    double area1, area2;

    //inquiry
    cout << "M3T1 - Area of two rectangles\n";
    cout << "Width of first rectangle: ";
    cin >> width1;
    cout << "Length of first rectangle: ";
    cin >> length1;
    cout << endl;
    cout << "Width of second rectangle: ";
    cin >> width2;
    cout << "Length of second rectangle: ";
    cin >> length2;

    // calculations
    area1 = width1 * length1;
    area2 = width2 * length2;

    // print out answer
    cout << "The area of the first rectangle is: " << area1 << endl;
    cout << "The area of the second rectangle is: " << area2 << endl;
} 