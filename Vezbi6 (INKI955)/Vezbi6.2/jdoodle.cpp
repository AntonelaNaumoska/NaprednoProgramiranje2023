#include <iostream>
#include <time.h>
#include <cstdlib>
//#include <windows.h>
using namespace std;
void one();
void two();
void three();
void four();
void five();
void six();
//Declare Functions used
int main()
{
short unsigned int score = 0;
short unsigned int compScore = 0;
short unsigned int num = 0;
short unsigned int num2 = 0;
short unsigned int compNum = 0;
short unsigned int compNum2 = 0;
short unsigned int sum = 0;
short unsigned int compSum = 0;
char letter;
//Declare Variables
srand(time(NULL));
while (letter != 'q')
{
cout << "Your Score: " << score << endl;
cout << "computer's Score: " << compScore << endl << endl;
cout << "Press r to roll or q to quit: ";
cin >> letter;
num = 1 + rand()%6;
num2 = 1 + rand() %6;
compNum = 1 + rand() %6;
compNum2 = 1 + rand() %6;
//sto se sluciva so redovite 32 do 36 i koi se vrednostite na promenlivite ?
//rand() % 6 vrakja random integer od 0 do 5. so dodavanje + 1 se pomestuvaat vrednostite od 0-5 do 1-6.

sum = num + num2;
compSum = compNum + compNum2;

//Calculate Sums

if (letter == 'q')
break;
if (letter != 'r')
{
system("cls");
continue;
}

switch (num)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default: //dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ? - Ne e striktno kroistenjeto na default no e preporaclivo vo slucaj da nastane greska.
cout << "Error...";
break;
} //end switch

switch (num2)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default:// //dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ?
cout << "Error...";
break;
} //end switch

cout << endl << "Yours: " << num << ", " << num2 << endl;
cout << "Computer's: " << compNum << ", " << compNum2 << "\n\n";

//Display dice and numbers

if (sum > compSum)
{
cout << "You won!!" << endl << endl;
score++;
}
else
{
compScore++;
cout << "you lost..." << endl << endl;
}

//shto rabotat naredbite 119 i 120 ?

system("pause"); // system("pause") e komanda koja go pauzira izvrsuvanjeto na programata se dodeka korisnikot ne pritisne kopce.
system("cls"); // system("cls") e komanda za brisenje(cistenje) na ekranot na konzolata.


}
return 0;
}

void one()
{
cout << "-----" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "-----" << endl;
}
void two()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void three()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void four()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|   |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void five()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "| O |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void six()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}

/*
Antonela Naumoska INKI955

Ovoj kod e igra vo koja se frlaat kocki od korisnikot i kompjuterot i se spordeuva zbirot na kockite. 
Korisnikot moze da prestane so igra dokolku pritisne 'q'.
Se koristat funkciite (one(), two(), three(), four(), five() i six()) za pretstavuvanje slikovito na vrednostite na kockite od 1 do 6.
Vo kodot imame while jamka koja proveruva dali korisnikot pritisnal 'q', se dodeka nema pritisnato kodot prodolzuva da se izvrsuva.
*/