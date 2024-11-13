#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>

using namespace std;

class RaspberryRoulette {
private:
    struct Player {
        string name;
        int health;
        Player(string n, int h) : name(n), health(h) {}
    };

    vector<bool> chamber;  // true for raspberry rounds, false for blanks
    Player player{"Player", 2};
    Player dealer{"Dealer", 2};
    mt19937 rng;

    void loadChamber() {
        chamber.clear();
        // Load 3 raspberry rounds and 3 blanks
        for (int i = 0; i < 3; i++) {
            chamber.push_back(true);   // raspberry
            chamber.push_back(false);  // blank
        }
        
        // Shuffle the chamber
        shuffle(chamber.begin(), chamber.end(), rng);
    }

    bool fireShot() {
        if (chamber.empty()) return false;
        
        bool shot = chamber.back();
        chamber.pop_back();
        return shot;
    }

    void displayStatus() {
        cout << "\nStatus:\n";
        cout << player.name << " HP: " << player.health << "\n";
        cout << dealer.name << " HP: " << dealer.health << "\n";
        cout << "Rounds remaining: " << chamber.size() << "\n\n";
    }

public:
    RaspberryRoulette() {
        // Initialize random number generator with time-based seed
        rng.seed(chrono::steady_clock::now().time_since_epoch().count());
    }

    void playGame() {
        cout << "Welcome to Raspberry Roulette!\n";
        cout << "Hit twice with raspberry jam and you lose!\n\n";

        while (player.health > 0 && dealer.health > 0) {
            loadChamber();
            
            while (!chamber.empty() && player.health > 0 && dealer.health > 0) {
                // Player's turn
                displayStatus();
                cout << "Your turn! Choose your target:\n";
                cout << "1. Shoot at dealer\n";
                cout << "2. Shoot at yourself\n";
                
                int choice;
                cin >> choice;

                bool isRaspberry = fireShot();
                if (choice == 1) {
                    cout << "You shoot at the dealer... ";
                    if (isRaspberry) {
                        cout << "SPLAT! Raspberry jam everywhere!\n";
                        dealer.health--;
                    } else {
                        cout << "Click! It was a blank.\n";
                    }
                } else {
                    cout << "You shoot at yourself... ";
                    if (isRaspberry) {
                        cout << "SPLAT! You're covered in raspberry jam!\n";
                        player.health--;
                    } else {
                        cout << "Click! It was a blank. You get another turn!\n";
                        continue;  // Player gets another turn
                    }
                }

                // Dealer's turn (if still alive)
                if (dealer.health > 0 && player.health > 0 && !chamber.empty()) {
                    cout << "\nDealer's turn...\n";
                    // Simple AI: dealer always shoots at player
                    bool isRaspberry = fireShot();
                    cout << "Dealer shoots at you... ";
                    if (isRaspberry) {
                        cout << "SPLAT! You're hit with raspberry jam!\n";
                        player.health--;
                    } else {
                        cout << "Click! It was a blank.\n";
                    }
                }
            }

            if (chamber.empty() && player.health > 0 && dealer.health > 0) {
                cout << "\nChamber is empty! Loading new rounds...\n\n";
            }
        }

        // Game Over
        cout << "\nGame Over!\n";
        if (player.health <= 0) {
            cout << "You lost! The dealer wins!\n";
        } else {
            cout << "Congratulations! You won!\n";
        }
    }
};

int main() {
    RaspberryRoulette game;
    game.playGame();
    return 0;
}