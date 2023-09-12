#include <iostream>
#include <vector>
#include <cstdlib>
#include <windows.h>

using namespace std;
void randomizer();

int main() {
    cout << "Type rock, paper, or scissors!" << endl;
    // sets the current time as a random seed to make the random generation a little more random
    srand(GetTickCount());
    // jumps to the function that checks for exit codes and invalid responses
    randomizer();
}

void randomizer() {
    for ( ; ; ) {
        string userInput;
        // variable that contains the 3 valid responses
        vector<string> choice = {"rock", "paper", "scissors"};
        // checks for user input
        cin >> userInput;
        // checks for exit command and valid responses
        if (userInput == "exit")
            exit(2);
        if (userInput == choice[0] || userInput == choice[1] || userInput == choice[2]) {

            vector<string> options = {"rock", "paper", "scissors"};

            int randIndex = rand() % 3;

            // converts the integer from the randIndex into a string
            if (randIndex == 0) {
                cout << "   rock" << endl;
            } else if (randIndex == 1) {
                cout << "   paper" << endl;
            } else if (randIndex == 2) {
                cout << "   scissors" << endl;
            }

            // checking win conditions
            if (userInput == choice[0] && randIndex == 1 || userInput == choice[1] && randIndex == 2 || userInput == choice[2] && randIndex == 1) {
                cout << "   i win!!" << endl;
            } else if (userInput == choice[0] && randIndex == 2 || userInput == choice[1] && randIndex == 0 || userInput == choice[2] && randIndex == 1)
                cout << "   aww i lose :(" << endl;

        } else
            cout << "INVALID RESPONSE" << endl;
    }
}


