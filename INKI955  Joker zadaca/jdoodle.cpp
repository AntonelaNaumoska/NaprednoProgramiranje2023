#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;
 
const int Values = 13;
const int Suits = 4;
const int Jokers = 2;
 
struct Card 
{
    string suit;
    string rank;
};
 
vector<Card> SpilKarti();
void Pecati(const vector<Card>& deck);
void Izmesaj(vector<Card>& deck);
void Razdeli(const vector<Card>& deck);
 
int main() 
{
    vector<Card> deck = SpilKarti();
    cout << "Na pocetok spilot izgleda vaka:" << endl;
    Pecati(deck);
 
    srand(time(0));
    for (int i = 0; i < 1000; i++) 
    {
        int index1 = rand() % deck.size();
        int index2 = rand() % deck.size();
        swap(deck[index1], deck[index2]);
    }
 
    cout << "\nIzmesan:" << endl;
    Pecati(deck);
 
    cout << endl;
    Razdeli(deck);
 
    return 0;
}
 
vector<Card> SpilKarti() 
{
    vector<Card> deck;
    string suits[Suits] = {"Hearts", "Clubs", "Diamonds", "Spades"};
    string ranks[Values] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    for (int i = 0; i < Values; i++)
    {
        for (int j = 0; j < Suits; j++)
        {
            Card c = {suits[j], ranks[i]};
            deck.push_back(c);
        }
    }
    Card bj = {"joker", "Black"};
    deck.push_back(bj);
    Card rj = {"joker", "Red"};
    deck.push_back(rj);
    return deck;
}
 
void Pecati(const vector<Card>& deck)
{
    for (const auto& card : deck)
    {
        cout << card.rank << " of " << card.suit << endl;
    }
}
 
void Razdeli(const vector<Card>& deck) 
{
    int karti = deck.size() / 4;
    for (int i = 1; i <= 4; i++)
    {
        cout<<"Igrac "<<i<<":"<<endl;
        for (int j = 0; j < karti; j++) 
        {
            cout << deck[j].rank << " of " << deck[j].suit << "\n";
        }
        cout << endl;
    }
}