#include <iostream>
using namespace std;

void zamenaNaKarakteriIme(char* str)
{
    char ch[] = "/}|;";
    for (int i = 0; i < 4; i++) 
    {
        *(str + i) = ch[i];
    }
}

void zamenaNaKarakteriPrezime(char* str)
{
    char ch[] = "][&%";
    for (int i = 0; i < 4; i++) 
    {
        *(str + i) = ch[i];
    }
}

int main() {
    char Ime[] = "Antonela";
    char Prezime[] = "Naumoska";
    
    cout<< Ime <<endl;
    zamenaNaKarakteriIme(Ime);
    cout<< Ime <<endl;
    
    cout<<endl;
    
    cout<< Prezime <<endl;
    zamenaNaKarakteriPrezime(Prezime);
    cout<< Prezime <<endl; 

    return 0;
}





