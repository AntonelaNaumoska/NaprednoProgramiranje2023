#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card structure definition
struct card {
   const char *face; // define pointer face
   const char *suit; // define pointer suit
}; // end struct card

typedef struct card Card; // new type name for struct card

// prototypes
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );

int main( void )
{
   Card deck[ CARDS ]; // define array of Cards

   // sto se pravi vo ovoj red ? - se definira niza od pokazuvaci *face[] i i se dodavaat vrednostite ("Ace", "Deuce"...)
   const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
      "Six", "Seven", "Eight", "Nine", "Ten",
      "Jack", "Queen", "King"};

   // sto se pravi vo ovoj red ? -  se definira niza od pokazuvaci *suit[] i i se dodavaat vrednostite ("Hearts", "Diamonds"...)
   const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};

   srand( time( NULL ) ); // sto e ovaa naredba ? - funkcijata srand prima argument time(NULL) i so ova e ovozmozeno generiranje na slucaen broj.

   fillDeck( deck, face, suit ); 
   shuffle( deck ); 
   deal( deck ); 
} // end main

// place strings into Card structures
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] )
{
   size_t i; 

   // loop through wDeck
   for ( i = 0; i < CARDS; ++i ) {
      wDeck[ i ].face = wFace[ i % FACES ];
      wDeck[ i ].suit = wSuit[ i / FACES ];
   } // end for
} // end function fillDeck

// shuffle cards
void shuffle( Card * const wDeck )
{
   size_t i; // sto e ovaa promenliva ?
   size_t j; // sto e ovaa promenliva i vo koi vrednosti se dvizi ? vidi kod 
   Card temp; // define temporary structure for swapping Cards
    // - size_t e data type za golemina na objekti i se koristi kako brojac na brojot na objekti. 'i' i 'j' se brojaci for jamkata

   // loop thr
   for ( i = 0; i < CARDS; ++i ) {
      j = rand() % CARDS; // 
      temp = wDeck[ i ];
      wDeck[ i ] = wDeck[ j ];
      wDeck[ j ] = temp;
   } // end for
} // end function shuffle

// deal cards
void deal( const Card * const wDeck )
{
   size_t i; // counter

   // loop through wDeck
   for ( i = 0; i < CARDS; ++i ) {
      printf( "%5s of %-8s%s", wDeck[ i ].face, wDeck[ i ].suit,
         ( i + 1 ) % 4 ? "  " : "\n" );
   } // end for
} // end function deal

/*
Antonela Naumoska INKI955

So ovoj kod se simulira spil na karti, koi se mesaat i se delat na igraci. Na pocetok se definiraat dve konstanti CARDS(52) i FACES(13).
Se definira struktura(card) so clenovi "face" i "suit", niza od char pokazuvaci. Se definira Card preku typedef od strukturata "card".
Se koristat funkcii: fillDeck, shuffle i deal. Preku fillDeck se popolnuva spilot, so funkcijata shuffle, spilot se mesa i so funckijata deal se delat kartite na igracite.
*/