#include <iostream>
 
using namespace std;
 
int main()
{
    char str[] = "Flowers Miley Cyrus";
    char *ptr = str;
 
    cout << "Pesna: " << ptr << endl;
    cout << "Pocetna pozicija na cel string: " << *ptr << endl;
    cout << "Adresa na pocetnata pozicija: " << (void *)ptr << endl;
 
    ptr = str + 8;
    cout <<endl;
 
    cout << "Sodrzina po premesten pocetok: " << ptr << endl;
    cout << "Pocetna pozicija od novata sodrzina: " << *ptr << endl;
    cout << "Adresa od koja pocnuva novata sodrzina: " << (void *)ptr << endl;
 
    return 0;
}
 