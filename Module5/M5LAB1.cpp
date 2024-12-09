// CSC 134
// M5LAB1
// Leeanna Kathrine Coleman
// 10/28/24



#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
// TODO: add more choices here
void choice_order_food();
void freddy_fazbear();
void taco_bell();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0;
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    // call choice 2 here
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() {
    cout << "TODO: Write something here" << endl;

}

void choice_go_home() {
    cout << "You decide to go home." << endl;
    cout << "Safe at home, do you:" << endl;
    cout << "1. Order some food" << endl;
    cout << "2. Go to bed" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_order_food();
    } else if (2 == choice) {
        cout << "You go to bed." << endl;
        cout << "*** Game Over ***" << endl;
    }
}

// any new choices go here
void choice_order_food() {
    cout << "You order food." << endl;
    cout << "What to order?" << endl;
    cout << "1. Freddy Fazbear's Pizzeria" << endl;
    cout << "2. Taco Bell" << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
        freddy_fazbear();
    } else if (2 == choice) {
        taco_bell();
    }
}

void freddy_fazbear(){
  cout << "You call Freddy Fazbear's Pizzeria..." << endl << endl;
  cout << "Thank you for calling Freddy Fazbear\'s Pizza!" << endl; 
  cout << "We're sorry, but our establishment is permanently" << endl;
  cout << "closed due to an incident that occurred some time" << endl;
  cout << "ago. Our beloved animatronics... well, they had" << endl;
  cout << "a few issues with the safety of our guests." << endl;
  cout << "If you are calling for further information or" << endl;
  cout << "seeking legal action, please do not call again!" << endl;
  cout << "Thank you, Goodbye!" << endl << endl;
  cout << "You wonder what incident caused Freddy Fazbear\'s Pizzeria to close as you fall sleep hungry." << endl';
}

void taco_bell() {
  cout << "You call Taco Bell..." << endl << endl;
  cout << "Hi, thank you for calling Taco Bell! " << endl;
  cout << "Before we get started, I just want to let you know that " << endl;
  cout << "we\'re completely out of tortillas, beef, chicken, cheese..." << endl;
  cout << "well, pretty much everything except lettuce and beans." << endl;
  cout << "So, if you\'re still craving something, let me know!" << endl;
  cout << "What would you like to order?" << endl << endl;
  cout << "You hang up immediately and go to sleep hungry." << endl;
  return 0;
}