#include <iostream>
using namespace std;
class NombreComplexe {
public:
    NombreComplexe(double re, double im) : reel(re), imaginaire(im) {}

   
    NombreComplexe operator+(const NombreComplexe& autre) {
        return NombreComplexe(reel + autre.reel, imaginaire + autre.imaginaire);
    }

    
    NombreComplexe operator-(const NombreComplexe& autre) {
        return NombreComplexe(reel - autre.reel, imaginaire - autre.imaginaire);
    }

    
    NombreComplexe operator*(const NombreComplexe& autre) {
        double nouveauReel = (reel * autre.reel) - (imaginaire * autre.imaginaire);
        double nouveauImaginaire = (reel * autre.imaginaire) + (imaginaire * autre.reel);
        return NombreComplexe(nouveauReel, nouveauImaginaire);
    }

    void afficher() {
       cout << reel << " + " << imaginaire << "i" << endl;
    }

private:
    double reel;
    double imaginaire;
};

int main() {
    double reel1, imaginaire1, reel2, imaginaire2;

    cout << "Entrez la partie réelle du premier nombre complexe : ";
    cin >> reel1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> imaginaire1;
    cout << "Entrez la partie réelle du deuxième nombre complexe : ";
    cin >> reel2;
    cout << "Entrez la partie imaginaire du deuxième nombre complexe : ";
    cin >> imaginaire2;

    NombreComplexe complexe1(reel1, imaginaire1);
    NombreComplexe complexe2(reel2, imaginaire2);

    NombreComplexe somme = complexe1 + complexe2;
    NombreComplexe difference = complexe1 - complexe2;
    NombreComplexe produit = complexe1 * complexe2;

    cout << "La somme est : ";
    somme.afficher();

   cout << "La différence  est : ";
    difference.afficher();

   cout << "Le produit  est : ";
    produit.afficher();

    return 0;
}
