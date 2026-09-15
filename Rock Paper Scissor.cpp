#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int matchMove(string playerMove) {
    if (playerMove == "rock"||playerMove == "Rock") {
        return 0;
    } else if (playerMove == "paper"||playerMove == "Paper") {
        return 1;
    } else if (playerMove == "scissors"||playerMove == "Scissors") {
        return 2;
    } else {
        cout << "Invalid move. Please choose rock, paper, or scissors." << endl;
        return -1; // Invalid move
    }
}

int main() {
    string playerMove="";
    int playerMoveInt;
    int computerMoveInt = rand() % 3;

    int playerWins=0;
    int computerWins=0;

    cin >> playerMove;
    playerMoveInt = matchMove(playerMove);

    if (playerMoveInt == -1) {
        cout << "Exiting the game due to invalid input." << endl;
        return 1; 
    }
    else if (playerMoveInt== computerMoveInt){
        cout << "It's a tie!\n Score: playerWins=" << playerWins << ", ComputerWins=" << computerWins" << endl;
    }
    else if (playerMoveInt==2 && computerMoveInt==0){
        computerWins++;
        cout << "Computer wins!\n Score: playerWins=" << playerWins << ", ComputerWins=" << computerWins << endl;
        
    }
    
    else if (playerMoveInt>computerMoveInt){
        playerWins++;
        cout << "Player wins!\n Score: playerWins=" << playerWins << ", ComputerWins=" << computerWins << endl;

    }
    else{
        computerWins++;
        cout << "Computer wins!\n Score: playerWins=" << playerWins << ", ComputerWins=" << computerWins << endl;
    }

    return 0;
}