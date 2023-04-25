#include <iostream>
#include <ctype.h>
using namespace std;

int main() 
{
    string recenica;
    int malibukvi = 0; 
    int golemibukvi = 0;
    int broevi = 0; 
    int specijalnikarakteri = 0;
    int golemina = 0;

    cout << "Napisi recenica: ";
    getline(cin, recenica);
    golemina = recenica.length();

    for(int i = 0; i < golemina; i++) 
    {
        if(islower(recenica[i])) 
        {
            malibukvi++;
        } 
        else if(isupper(recenica[i])) 
        {
            golemibukvi++;
        } 
        else if(isdigit(recenica[i])) 
        {
            broevi++;
        } 
        else 
        {
            specijalnikarakteri++;
        }
    }

    cout << malibukvi << " mali bukvi" << endl;
    cout << golemibukvi << " golemi bukvi" << endl;
    cout << broevi << " broevi" << endl;
    cout << specijalnikarakteri << " specijalni karakteri" << endl;
    cout << golemina << " vkupno karakteri" << endl;

    return 0;
}