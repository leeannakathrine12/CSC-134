// if statement example3
// CSC 134
// M3LAB1
// Leeanna Kathrine Coleman
// 09/20/24


#include <iostream>
using namespace std;

void choice1();
void choice2();

int main() {
  
  int choice; 

  cout << "A genie approaches you and will grant one wish. Only two wishes come to mind.\n" << "Which wish do you pick?\n" << "[1] I want to never age again!\n" << "[2] I want to be Wolverine!\n";
  cout << "Type 1 or 2: "; 
  cin >> choice;

  if (1 == choice) {
    choice1();
  }
  else if (2 == choice) {
    choice2();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0;
}

void choice1() {
  cout << "The genie grants your wish... by killing you." << endl;
  cout << "\"If you're dead, you stop aging.\" the genie says as he floats away." << endl;
}

void choice2() {
  cout << "The genie grants your wish... by turning you into a wolverine, the animal." << endl;
  cout << "\"You meant the superhero Wolverine? I have no idea what a superhero is..\" the geneie says as you scurry along." << endl;
}