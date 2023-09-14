#include <iostream>
#include <vector>
#include <cstdlib>
#include <windows.h>
#include <random>

using namespace std;
void randomizer();

int main() {
    cout << "Type rock, paper, or scissors!" << endl;
    srand(GetTickCount());
    randomizer();
}

void randomizer() {
    for ( ; ; ) {
        string userInput;
        vector<string> choice = {"rock", "paper", "scissors"};
        cin >> userInput;
        if (userInput == "exit")
            exit(2);
        if (userInput == choice[0] || userInput == choice[1] || userInput == choice[2]) {
            vector<string> options = {"rock", "paper", "scissors"};
            int randIndex = rand() % 3;

            if (randIndex == 0)
                cout << "   rock" << endl;
            else if (randIndex == 1)
                cout << "   paper" << endl;
            else
                cout << "   scissors" << endl;

            if (userInput == choice[0] && randIndex == 1)
                cout << "   I win :)" << endl;
            else if (userInput == choice[1] && randIndex == 2)
                cout << "   I win :)" << endl;
            else if (userInput == choice[2] && randIndex == 1)
                cout << "   I win :)" << endl;

            if (userInput == choice[0] && randIndex == 2)
                cout << "   I lose :(" << endl;
            else if (userInput == choice[1] && randIndex == 0)
                cout << "   I lose :(" << endl;
            else if (userInput == choice[2] && randIndex == 1)
                cout << "   I lose" << endl;
            
        } else
            cout << "INVALID RESPONSE" << endl;
    }
}


