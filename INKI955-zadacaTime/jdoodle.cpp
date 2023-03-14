#include <iostream>
#include <time.h>

using namespace std;

int main ()
{
  time_t rawtime;

  time (&rawtime);
  cout<<"The current local time is: "<< ctime (&rawtime);

  return 0;
}

/*Kodot raboti taka sto pred se treba da se povika bibliotekata <time.h> za vreme, sledno se pravi objekt so time_t rawtime,
sledno se povikuva funkcijata time koja go dava momentalnoto vreme i na kraj so cout se pecati vremeto odnosno se povikuva funckijata ctime koja go pretvorame lokalnoto vreme vo string.*/
