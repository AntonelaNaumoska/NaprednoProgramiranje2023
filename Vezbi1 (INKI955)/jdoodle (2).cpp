#include <iostream>

using namespace std;

int main() {
   /*Intertion sort rsaboti taka sto prvo se zema vtoriot element i se sporeduva so prviot i se pravi potrbnata zamena vo zavisnost dali se bara od najmal do najgolem element ili obratno
    Potoa istoto se pravi so sekoj sleden elemet se zema i se sporeduva so site prethodni elementi vo nizata vrajkajki se nanazad ii se stava na pogodnata pozivija.*/


    int myarray[] {(int)'A', (int)'n', (int)'t',(int)'o',(int)'n',(int)'e',(int)'l',(int)'a',(int)'N',(int)'a',(int)'u',(int)'m',(int)'o',(int)'s',(int)'k',(int)'a',(int)'I',(int)'N',(int)'K',(int)'I',(int)'9',(int)'5',(int)'5'};

    cout<<"\nInput list is \n";
    for(int i=0;i<23;i++)
    {
        cout <<myarray[i]<<"\t";
    }
    for(int k=1; k<23; k++)
    {
        int temp = myarray[k];
        int j= k-1;
        while(j>=0 && temp <= myarray[j])
        {
            myarray[j+1] = myarray[j];
            j = j-1;
        }
        myarray[j+1] = temp;
    }
    cout<<"\nSorted list is \n";
    for(int i=0;i<23;i++)
    {
        cout <<myarray[i]<<"\t";
    }

    return 0;
}
