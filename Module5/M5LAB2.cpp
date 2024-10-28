// CSC 134
// M5LAB2
// Leeanna Kathrine Coleman
// 10/28/24

#include <iostream>

using namespace std;

void greeting(string name);
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
   double length, width, area;
   string name;

   greeting(name);
   length = getLength();
   width = getWidth();
   area = getArea(length, width);
   displayData(length, width, area);
          
   return 0;
}

void greeting(string name) {
   cout << "What is your first name?" << endl;
   cin >> name;
   cout << endl << "Welcome to the Rectangle Area Calculator " << name << "!" << endl;
   cout << "-------------------------------------------------------" << endl << endl;
   return;
}

double getLength() {
double length;
cout << "Enter the length of your rectangle: " << endl;
cin >> length;
return length;
}

double getWidth() {
double width;
cout << "Enter the width of your rectangle: " << endl;
cin >> width;
return width;
}

double getArea(double length, double width) {
double area = length * width;
return area;
}

void displayData(double length, double width, double area) {
cout << "The length you entered is: " << length << endl;
cout << "The width you entered is: " << width << endl;
cout << "The area of your rectangle is: " << area << endl;
}
