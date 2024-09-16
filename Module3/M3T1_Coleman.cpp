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

    cout << "M3T1 - Area of two rectangles\n";
    cout << "Width of first rectangle: \n";
    cin >> width1;
    cout << "Length of first rectangle: \n";
    cin >> length1;
    cout << endl;
    cout << "Width of second rectangle: \n";
    cin >> width2;
    cout << "Length of second rectangle: \n";
    cin >> length2;

    area1 = width1 * length1;
    area2 = width2 * length2;

    cout << "The area of the first rectangle is: " + area1;
    cout << "The area of the second rectangle is: " + area2;
} 