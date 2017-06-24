#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    srand (time(NULL));
    int arma, escudo, dano;
    
    arma = rand()%6+1;
    arma += rand()%6+1;
    arma += 3;

    escudo = rand()%4+1;
    escudo += rand()%4+1;
    escudo += 1;

    dano = arma - escudo;
 
    if (dano > 0) {
        cout << " El dano es " << dano << endl;
    } else {
        cout << " No sufrio dano " << endl;
    }
}