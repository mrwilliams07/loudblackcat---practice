#include <iostream>
#include <stdlib.h>


 /* 
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
  */

using namespace std;

int main() {
  
  srand(time(NULL));

  int computer = rand() % 3 + 1; // A random number that could be 1, 2, or 3 for the computer. 

  int user = 0; // We also have a variable for user’s input.

  // Prompts the user to select either Rock, Paper, or Scissors
  cout << "====================\n";
  cout << "rock paper scissors!\n";
  cout << "====================\n";

  cout << "1) ✊\n";
  cout << "2) ✋\n";
  cout << "3) ✌️\n";
  
  cout << "shoot: "; // Prompts user to enter a number corresponding with the emoji
      cin >> user;

// User selection output
  if (user == 1) {
    cout << "\nYou chose: Rock ✊\n";
  }
  else if (user == 2) {
    cout << "\nYou chose: Paper ✋\n";
  }
  else if (user == 3) {
    cout << "\nYou chose: Scissors ✌️\n";
  }

  // CPU selection output (randomized)
  if (computer == 1) {
    cout << "Computer chose: Rock ✊\n";
  }
  else if (computer == 2) {
    cout << "Computer chose: Paper ✋\n";
  }
  else if (computer == 3) {
    cout << "Computer chose: Scissors ✌️\n";
  }
  
  // User & Computer Tie
  if (user == computer) {
    cout << "\nDraw!\n";
  }
  
  // user rock
  else if (user == 1 && computer == 2) {
    cout << "\nYou lose! Try again...\n";
  }
  else if (user == 1 && computer == 3) {
    cout << "\nYou won! Great job!\n";
  }
  
  // user paper
  else if (user == 2 && computer == 1) {
    cout << "\nYou won! Great job!\n";
  }
  else if (user == 2 && computer == 3) {
    cout << "\nYou lose! Try again...\n";
  }

  // user scissors
  else if (user == 3 && computer == 1) {
    cout << "\nYou lose! Try again...\n";
  }
  else if (user == 3 && computer == 2) {
    cout << "\nYou won! Great job!\n";
  }


  return 0;





}
