#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(0)); // seed the random number generator
  int computer = rand() % 3; // generate a random number between 0 and 2
  int player;

  cout << "\t\tHere are the rules for the game....."<<endl;
  cout << "\t\tEnter 0 for rock, 1 for paper, or 2 for scissors and 9 to exit: "<<endl;
  system("open-bash.sh");
  do{
  	 cout << "Enter a number(0-2) or 9:"<<endl;
	  cin >> player;
	  switch (computer) {
	    case 0:
	      cout << "The computer chose rock." << endl;
	      break;
	    case 1:
	      cout << "The computer chose paper." << endl;
	      break;
	    case 2:
	      cout << "The computer chose scissors." <<endl;
	      break;
	  }
	
	  switch (player) {
	    case 0:
	      if (computer == 0) {
	        cout << "It's a tie." << endl;
	      } else if (computer == 1) {
	        cout << "You lose." << endl;
	      } else {
	        cout << "You win." << endl;
	      }
	      break;
	    case 1:
	      if (computer == 0) {
	        cout << "You win." << endl;
	      } else if (computer == 1) {
	        cout << "It's a tie." << endl;
	      } else {
	        cout << "You lose." << endl;
	      }
	      break;
	    case 2:
	      if (computer == 0) {
	        cout << "You lose." << endl;
	      } else if (computer == 1) {
	        cout << "You win." << endl;
	      } else {
	        cout << "It's a tie." << endl;
	      }
	      break;
	    default:
	      cout << "Invalid input." << endl;
	      break;
	  }
	}while(player != 9);
	cout<<"Exit......"<<endl;
  return 0;
}
