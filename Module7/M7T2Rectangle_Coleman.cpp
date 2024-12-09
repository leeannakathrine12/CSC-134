// CSC 134
// M7T2 - Rectangle
// Leeanna Kathrine Coleman
// 12/04/24

#include <iostream>
using namespace std;

class Rectangle {
    private:
        double width;
        double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};

void Rectangle::setWidth(double w){
    width = w;
}

void Rectangle::setLength(double len) {
    length = len;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle:: getArea() const {
    return width * length;
}

int main() {
    Rectangle box;
    double recWidth;
    double recLength;

    cout << "This program will calculate the area of a\n";
    cout << "rectangle. What is the width? ";
    cin >> recWidth;
    while (recWidth <= 0) {
        cout << "Invalid width. Please enter a positive value." << endl;
        cin >> recWidth;
    }
    cout << "What is the length? ";
    cin >> recLength;
    while (recLength <= 0) {
        cout << "Invalid length. Please enter a positive value." << endl;
        cin >> recLength;
    }

    box.setWidth(recWidth);
    box.setLength(recLength);

    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    return 0;
}