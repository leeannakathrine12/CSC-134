// CSC 134
// M7T2 - Box
// Leeanna Kathrine Coleman
// 12/04/24

#include <iostream>
using namespace std;

class Box {
    private:
        double width;
        double length;
        double height;
    public:
        void setWidth(double);
        void setLength(double);
        void setHeight(double);
        double getWidth() const;
        double getLength() const;
        double getHeight() const;
        double getVolume() const;
};

void Box::setWidth(double w){
    width = w;
}

void Box::setLength(double l) {
    length = l;
}

void Box::setHeight(double h) {
    height = h;
}

double Box::getWidth() const {
    return width;
}

double Box::getLength() const {
    return length;
}

double Box::getHeight() const {
    return height;
}


double Box:: getVolume() const {
    return width * length * height;
}

int main() {
    Box box;
    double recWidth;
    double recLength;
    double recHeight;

    cout << "This program will calculate the area of a\n";
    cout << "Cube. What is the width? ";
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
    cout << "What is the height? ";
    cin >> recHeight;
    while (recHeight <= 0) {
        cout << "Invalid height. Please enter a positive value." << endl;
        cin >> recHeight;
    }

    box.setWidth(recWidth);
    box.setLength(recLength);
    box.setHeight(recHeight);

    cout << "Here is the Cube's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Height: " << box.getHeight() << endl;
    cout << "Volume: " << box.getVolume() << endl;
    return 0;
}