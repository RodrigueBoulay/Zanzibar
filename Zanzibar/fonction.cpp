#include "fonction.h"


double des () {
    int tour(1), nbd(0), compteur(0); //Je definis mes fonctions
         while (tour <= 3) { //Je fais une boucle pour qu'elle se repete 3 fois car 3 tours
            cout << "Lancer les des : "; // Je demande à l'utilisateur de ch
            cin >> nbd;
             switch (nbd) {
                case 1:
                    cout << "Tu a marque 100 points !" << endl;
                    tour = tour + 1;
                    compteur = compteur + 100;
                    break;
                case 2:
                    cout << "Tu a marque 2 points !" << endl;
                    tour = tour + 1;
                    compteur = compteur + 2;
                    break;
                case 3:
                    cout << "Tu a marque 3 points !" << endl;
                    tour = tour + 1;
                    compteur = compteur + 3;
                    break;
                case 4:
                    cout << "Tu a marque 4 points !" << endl;
                    tour = tour + 1;
                    compteur = compteur + 4;
                    break;
                case 5:
                    cout << "Tu a marque 5 points !" << endl;
                    tour = tour + 1;
                    compteur = compteur + 5;
                    break;
                case 6:
                    cout << "Tu a marque 60 points !" << endl;
                    tour = tour + 1;
                    compteur = compteur + 60;
                    break;
            }
        }
    cout << "Votre nombre de point : " << compteur << endl;
}


