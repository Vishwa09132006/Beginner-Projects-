#include <iostream>
#include <ctime>
using namespace std;

string getComputerMove () { //This function returns the random computer output
    srand(time(NULL));
    int r = rand () % (3 + 1 - 1);

    if (r == 1) {
        return "Rock";
    }

    if (r == 2) {
        return "Paper";
    }

    if (r == 3) {
        return "Scissor";
    }
}





int main () {

    string userMove;
    string computerMove = getComputerMove ();
    

    cout << "Let's Play Rock, Paper, Scissors and SHOOT! " << endl; 
    
    cout << "Choose Your Move. Rock, Paper or Scissor: " << endl;
    cin >> userMove;
    
    

  
        if (userMove == computerMove) {
            cout << "Tie Game! " << endl;
            cout << "You chose: " << userMove << endl;
            cout << "Computer chose: " << computerMove << endl;
        }

        if (userMove == "Rock" && computerMove == "Scissor") {
            cout << "You won!" << endl;
            cout << userMove << " Beats " << computerMove << endl;
        }

         if (userMove == "Scissor" && computerMove == "Paper") {
            cout << "You won!" << endl;
            cout << userMove << " Beats " << computerMove << endl;
        }

         if (userMove == "Paper" && computerMove == "Rock") {
            cout << "You won!" << endl;
            cout << userMove << " Beats " << computerMove << endl;
        }
        
        if (userMove == "Rock" && computerMove == "Paper") {
            cout << "Computer won!" << endl;
            cout << computerMove << " Beats " << userMove << endl;
        }
        
        if (userMove == "Scissor" && computerMove == "Rock") {
            cout << "Computer won!" << endl;
            cout << computerMove << " Beats " << userMove << endl;
        }
        
        if (userMove == "Paper" && computerMove == "Scissor" ) {
            cout << "Computer won!" << endl;
            cout << computerMove << " Beats " << userMove << endl;
        }


    



}
    
   


    




   