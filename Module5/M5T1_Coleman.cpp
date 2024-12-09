// CSC 134
// M5T1
// Leeanna Kathrine Coleman
// 10/28/24

#include <iostream>

using namespace std;

void say_hello();
int give_the_answer();
int double_a_number(int num);

int main() {
    cout << "Hello from main()" << endl;
    say_hello();
    int my_answer = give_the_answer();
    cout << "The magic number is: " << my_answer << endl;
    int num = my_answer;
    int twotimes = double_a_number(num);
    cout << "Double that is: " << twotimes << endl;
    return 0;
}

void say_hello() {
    cout << "Hi from say_hello() " << endl;
    return;
}

int give_the_answer() {
    int answer = 42;
    return answer;
}

int double_a_number(int num) {
    int new_num = num * 2;
    return new_num;
}