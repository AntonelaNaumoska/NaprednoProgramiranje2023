#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int DECK_SIZE = 54;
const int SUIT_SIZE = 13;
string suits[6] = {"Hearts", "Diamonds", "Clubs", "Spades", "Red Joker", "Black Joker"};
string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    
void shuffleDeck(string deck[], int size)   
{
    for (int i = 0; i < size; i++) 
    {
        int j = rand() % size;
        string temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}
int main()
{
    string deck[DECK_SIZE];
    int index = 0;
    for (int i = 0; i < 6; i++)
    {
        if(i == 4 || i == 5){
            deck[index] = suits[i];
            index++;
            continue;
        }
        for (int j = 0; j < SUIT_SIZE; j++)
        {
            deck[index] = ranks[j] + " of " + suits[i];
            index++;
        }
    }
    
    cout<<"Podreden Spil na karti: "<<endl;
    for (int i = 0; i < DECK_SIZE; i++)
    {
        cout << deck[i] << endl;
    }
    cout<<endl;
    srand(time(NULL)); 
    shuffleDeck(deck, DECK_SIZE);
    
    cout<<"Izmesan Spil na karti: "<<endl;
    for (int i = 0; i < DECK_SIZE; i++)
    {
    cout << deck[i] << endl;
    }
    
    return 0 ;
}

/*OBJASNUVANJE:
Algoritmot raboti taka sto gi imame zadadeno goleminata na spilot na kartite (54), vidot na karta i vrednosta. Vidot na kartata i vrednosta se spojuvaat i se dodavaat vo niza od stringovi,
koga vrednosta na 'i' kje bide 4 ili 5 togas na krajot od nizata na stringovi se dodavaat crveniot i crniot joker i so toa go imame celosno spilot na karti, prvo se pecati podreden a potoa,
ja povikuvame funckijata shuffleDeck koja go mesa spilot od karti i raboti taka sto generirame random broj vo promenliva 'j' so rand() i so modul(%) od size (momentalnata vrednost na spilot) go dobivame random brojot, potoa
vrsime zamena so pomosna promenliva pomegju momentalnata vrednost na spilot so dobienata random vrednost 'j' i na toj nacin spilot kje se izmesa. I na kraj samo go pecatime izmesaniot spil.*/