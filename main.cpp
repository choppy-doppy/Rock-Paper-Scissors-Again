#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
void randomizer();
void inputCheck();

int main() {
    cout << "Type rock, paper, or scissors!" << endl;
    // sets the current time as a random seed to make the random generation a little more random
    srand(time(0));
    // jumps to the function that checks for exit codes and invalid responses
    inputCheck();
}

void inputCheck() {
    while ( 1 != 0) {
        string userInput;
        // variable that contains the 3 valid responses
        vector<string> choice = {"rock", "paper", "scissors"};
        // checks for user input
        cin >> userInput;
        // checks for exit command and valid responses
        if (userInput == "exit")
            exit(2);
        if (userInput == choice[0] || userInput == choice[1] || userInput == choice[2]) {
            randomizer();
        } else
            cout << "Invalid Response" << endl;
    }
}

void randomizer() {
    vector<string> options = {"rock", "paper", "scissors"};
    int randIndex = rand() % 3;
    cout << options[randIndex];
    cout << "\n";
}




