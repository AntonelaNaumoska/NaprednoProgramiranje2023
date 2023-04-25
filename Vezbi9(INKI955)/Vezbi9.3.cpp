#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));
    int randombroj = rand() % 100 + 1;
    int broj;
    int kolkupati = 0;

    bool marker = false;

    while (!marker) 
    {
        cout << "Pogodi go brojot od 1 do 100: ";
        cin >> broj;
        kolkupati++;

        if (broj == randombroj) 
        {
            marker = true;
            cout << "Go pogodi brojot! Za  " << kolkupati << " pati." << endl;
        } 
        else if (broj < randombroj) 
        {
            cout << "Tvojot pogodok e pomal. Probaj povtorno." << endl;
        } 
        else 
        {
            cout << "Tvojot pogodok e pogolem. Probaj povtorno." << endl;
        }
    }

    return 0;
}


