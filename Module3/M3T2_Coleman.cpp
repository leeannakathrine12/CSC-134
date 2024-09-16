// CSC 134
// M3T2
// Leeanna Kathrine Coleman
// 09/16/24

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double width1, width2, length1, length2;
    double area1, area2;

    //inquiry
    cout << "M3T2 - Area of two rectangles\n";
    cout << "Width of first rectangle: ";
    cin >> width1;
    cout << "Length of first rectangle: ";
    cin >> length1;
    cout << endl;
    cout << "Width of second rectangle: ";
    cin >> width2;
    cout << "Length of second rectangle: ";
    cin >> length2;
    cout << endl;

    // calculations
    area1 = width1 * length1;
    area2 = width2 * length2;

    // print out answer
    cout << "The area of the first rectangle is: " << area1 << endl;
    cout << "The area of the second rectangle is: " << area2 << endl;
    cout << endl;

    // which rectangle is larger?
    if (area1 > area2) {
        cout << "The first rectangle is larger.\n";
    }
    else if (area2 > area1) {
        cout << "The second rectangle is larger.\n";
    }
    else {
        cout << "Both rectangles have the same area.\n";
    }
} 