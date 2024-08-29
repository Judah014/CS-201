#include <iostream>
using namespace std;

//Judah Wangia 
// 8/28/2024


int main() {
  // There is a logic error in this program.
  // Correct this error, test your changes, and commit the changes
  int guess = 0, solution = 15;
  char answer = 'y';
  cout << "Would you like 222 play? ";
  cin >> answer;
  while (answer != 'n') {
    cout << "Enter your guess between 0 & 50: ";
    cin >> guess;
    if (guess > solution) {
      cout << "sorry - your guess is too big\n";
    }
    if (guess < solution){
      cout << "sorry - your guess is too low\n";
    } 
    // I added the condition that occurs if the guess == the solution
    if (guess == solution) {
      cout << "You guessed it right!\n";
    }
    cout << "Guess again? ";
    cin >> answer;
  }
}



