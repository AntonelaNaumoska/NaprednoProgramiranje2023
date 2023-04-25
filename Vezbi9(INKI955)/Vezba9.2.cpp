#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string filename, tekst;
    cout << "Ime na datoteka: ";
    getline(cin, filename);

    cout << "Vnesi tekst: ";
    getline(cin, tekst);

    ofstream file;
    file.open(filename, ios::app);

    if (!file) {
        cerr << "Greska" << endl;
        return 1;
    }

    file << tekst << endl;
    file.close();

    cout << "Tekstot e dodaden vo datotekata" << endl;
    return 0;
}