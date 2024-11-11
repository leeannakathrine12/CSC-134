// CSC 134
// M6T1
// Leeanna Kathrine Coleman
// 11/11/24

#include <iostream>
using namespace std;

//global constant
const int NUM_DAYS = 5;

void partOne();
void partTwo();

int main() {
    partOne();
    partTwo();
}

void partOne() {
    int todays_count = 0;
    double total = 0;
    double average = 0;

    for (int day = 1; day <= NUM_DAYS; day++) {
        cout << "Please enter the count for day " << day << " of " << NUM_DAYS << endl;
        cin >> todays_count;
        total += todays_count;
    }

    average = total / NUM_DAYS;
    cout << "For all " << NUM_DAYS << " days:" << endl;
    cout << "Total cars: " << total << endl;
    cout << "Average: " << average << endl;

}

void partTwo() {
    int cars[NUM_DAYS];
    int todays_count = 0;
    double total = 0;
    double average = 0;

    for (int day = 1; day <= NUM_DAYS; day++) {
        cout << "Please enter the count for day " << day << " of " << NUM_DAYS << endl;
        cin >> todays_count;
        cars [day] = todays_count;
        total += todays_count;
    }

    average = total / NUM_DAYS;
    cout << "For all " << NUM_DAYS << " days:" << endl;
    for (int day = 1; day <= NUM_DAYS; day++) {
        cout << cars[day] << ",";
    }
    cout << endl;
    cout << "Total cars: " << total << endl;
    cout << "Average: " << average << endl;

}