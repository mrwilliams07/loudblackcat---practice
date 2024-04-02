#include <iostream>
#include <stdlib.h>


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
  cout << "4) 🦎\n";
  cout << "5) 🖖\n";
  
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
  else if (user == 4) {
    cout << "\nYou chose: Lizard 🦎\n";
  }
  else if (user == 5) {
    cout << "\nYou chose: Spock 🖖\n";
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
  else if (user == 4) {
    cout << "Computer chose: Lizard 🦎\n";
  }
  else if (user == 5) {
    cout << "Computer chose: Spock 🖖\n";
  }

  // user and cpu tie 
  if (user == computer) {
    cout << "\nDraw!\n";
  }
  
  /* 
  
  Conditions for victory!
  ================
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
  ================
  
  */
  
  // user rock (1)
  if (user == 1 && computer == 2) {
    cout << "\nYou lose! Try again...\n";
  }
  else if (user == 1 && computer == 3) {
    cout << "\nYou won! Great job!\n";
  }
  else if (user == 1 && computer == 4) {
    cout << "\nYou won! Great job!\n";
  }
  else if (user == 1 && computer == 5) {
    cout << "\nYou lose! Try again...\n";
  }
  
  // user paper (2)
  if (user == 2 && computer == 1) {
    cout << "\nYou won! Great job!\n";
  }
  else if (user == 2 && computer == 3) {
    cout << "\nYou lose! Try again...\n";
  }
  else if (user == 2 && computer == 4) {
    cout << "\nYou lose! Try again...\n";
  }
  else if (user == 2 && computer == 5) {
    cout << "\nYou won! Great job!\n";
  }

  // user scissors (3)
  if (user == 3 && computer == 1) {
    cout << "\nYou lose! Try again...\n";
  }
  else if (user == 3 && computer == 2) {
    cout << "\nYou won! Great job!\n";
  }
  else if (user == 3 && computer == 4) {
    cout << "\nYou won! Great job!\n";
  }
  else if (user == 3 && computer == 5) {
    cout << "\nYou lose! Try again...\n";
  }

  // user lizard (4)
  if (user == 4 && computer == 1) {
    cout << "\nYou lose! Try again...\n";
  }
  else if (user == 4 && computer == 2) {
    cout << "\nYou won! Great job!\n";
  }
  else if (user == 4 && computer == 3) {
    cout << "\nYou lose! Try again...\n";
  }
  else if (user == 4 && computer == 5) {
    cout << "\nYou won! Great job!\n";
  }

  // user spock (5)
  if (user == 5 && computer == 1) {
    cout << "\nYou won! Great job!\n";
  }
  else if (user == 5 && computer == 2) {
    cout << "\nYou lose! Try again...\n";
  }
  else if (user == 5 && computer == 3) {
    cout << "\nYou won! Great job!\n";
  }
  else if (user == 5 && computer == 4) {
    cout << "\nYou lose! Try again...\n";
  }
  

  return 0;





}
