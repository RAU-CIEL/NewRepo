// TP 6 carrés animés 
// Fonction prototype du projet
// date : 06/12/2024
// RAULET

#include "carre.h"
#include <iostream>

int main()
{

    CCarre c1;
    c1.Setsx(10);
    c1.Setsy(20);
    c1.Setcote(100);
    c1.Afficher();
    c1.Deplacer('n', 5);
    c1.Afficher();
    c1.Deplacer(10, -5);
    c1.Afficher();
    CCarre carrés[4] = {
        CCarre(10, 20, 30),
        CCarre(50, 60, 20),
        CCarre(100, 100, 40),
        CCarre(200,150,50)
    };

    // Affichage des caractéristiques de chaque carré
    for (int i = 0; i < 4; ++i) {
        std::cout << "Carre " << i + 1 << " :\n";
        carrés[i].Afficher();
        return 0;
    }