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
void kitchen();
void bathroom();

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
    choice_back_door();
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
    cout << "You walk around the house to check the back door." << endl;
    cout << "After jiggling the door knob a couple of times, it opens!" << endl;
    cout << "You enter the house. All this walking around makes you feel" << endl;
    cout << "pretty hungry and your nervousness makes you have to use the bathroom!" << endl;
    cout << "Do you:" << endl;
    cout << "1. Go to the Kitchen" << endl;
    cout << "2. Go to the Bathroom" << endl;
    int choice;
    cin >> choice;
  if (1 == choice) {
    kitchen();
  } else if (2 == choice) {
    bathroom();
  }
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
  cout << "You wonder what incident caused Freddy Fazbear\'s Pizzeria to close as you fall sleep hungry." << endl;
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
}

void kitchen() {
  cout << "You step into the kitchen, and the first thing you notice is the overwhelming" << endl;
  cout << "number of candles scattered across every counter. The soft flickering light" << endl;
  cout << "casts eerie shadows on the walls, creating an almost claustrophobic atmosphere." << endl; 
  cout << "Suddenly, the back door slams shut with a deafening bang, and all the candles" << endl; 
  cout << "snuff out in unison, plunging the room into complete darkness. In the silence," << endl;
  cout << "you hear the faint sound of footsteps... but they're not yours. Panicking, you" << endl;
  cout << "sprint toward the door, but the darkness is overwhelming. You stumble over" << endl;
  cout << "something on the floor and crash to the ground. The last thing you see before" << endl; 
  cout << "everything goes black is a pair of worn, scuffed shoes, and the knowledge that" << endl;
  cout << "you\'re not alone anymore." << endl;
}

void bathroom() {
  cout << "You walk over to the bathroom. The door creaks as you push it open, and the " << endl; 
  cout << "flickering light casts strange shadows on the walls. As you step inside, the" << endl; 
  cout << "mirror catches your eye. Your reflection isn\'t quite right. It\'s you, but " << endl; 
  cout << "smiling unnaturally wide and creepily. Before you can react, the lights cut " << endl; 
  cout << "out, and you hear a soft whisper from behind you: \"You should\'nt have come here.\"" << endl;
  cout << "You were never seen again." << endl;
}