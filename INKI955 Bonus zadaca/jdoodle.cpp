#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int main()
{
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;
    srand(static_cast<unsigned int>(time(0)));
 
    while (true)
    {
        cout << "Enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): ";
        cin >> playerChoice;
 
        computerChoice = rand() % 3;
 
        if (playerChoice == computerChoice)
        {
            cout << "Tie!" << endl;
        }
        else if (playerChoice == 0 && computerChoice == 2 ||
            playerChoice == 1 && computerChoice == 0 ||
            playerChoice == 2 && computerChoice == 1)
        {
            cout << "You win!" << endl;
            playerScore++;
        }
        else
        {
            cout << "Computer wins!" << endl;
            computerScore++;
        }
        cout << "Player score: " << playerScore << endl;
        cout << "Computer score: " << computerScore << endl;
 
        cout << "Play again? (y/n): ";
        char playAgain;
        cin >> playAgain;
        if (playAgain != 'y')
        {
            break;
        }
    }
    return 0;
}