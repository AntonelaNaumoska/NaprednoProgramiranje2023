#include <iostream>
#include <time.h> 

using namespace std;

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<< "The current date/time is: "<< asctime (timeinfo);

  return 0;
}

/*Kodot raboti taka sto pred se treba da se povika bibliotekata <time.h> za vreme, sledno se pravi objekt so time_t rawtime,
tuka imame i struct tm timeinfo, odnosno toa e struktura od bibliotekata <time.h> kaj koja se dostapni site elementi od vremeto(pr. den, mesec, godina, sat, minuta...itn) i mozat da se koristat posebno,
so time funckijata go zemame momentalnoto vreme preku localtime (lokalno vreme) i na kraj go pecatime so funkcijata asctime koja ja pretvora tm strukturata vo string */
