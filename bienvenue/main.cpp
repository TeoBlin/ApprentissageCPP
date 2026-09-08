#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string nomDuFichier;
    cout << "nom du fichier : ";
    cin >> nomDuFichier;
    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*
    if (!leFichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;

        cout << setfill('-') << "+"<< setw(17) << "+"
             << setw (17) << "+"
             << setw(11) << "+"

             << setw(11) << "+"  << setfill(' ') <<endl;
        cout  << "|" << setw(16) << left << "Pays"
             << right << setw (18) << "Or"
             << setw (10) << "Argent"
             << setw(10) << "Bronze"
             << setw(2)  << "|"
             << endl;


        cout << setfill('-') << "+"<< setw(17) << "+"
             << setw (17) << "+"
             << setw(11) << "+"
             << setw(11) << "+"  << setfill(' ') <<endl;

        do
        {
            //récupération des valeurs
            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
            if (leFichier.good())//Si les valeurs ont bien été lues
            {
                cout  << "|"<< left << setw(15) << pays << right
                     << " | " << setw (15) << nbOr
                     << "|" << setw(10) << nbArgent
                     << "|" << setw(10) << nbBronze << "|" << endl;
            }
        } while (!leFichier.eof());
        // A compléter, affichage de la dernière ligne du tableau.
        cout << setfill('-') << "+"<< setw(17) << "+"
             << setw (17) << "+"
             << setw(11) << "+"
             << setw(11) << "+"  << setfill(' ') <<endl;
    }
    return 0;
}
