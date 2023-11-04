#include <iostream>
#include <list>
#include <string>
using namespace std;

struct Personne {
    string nom;
   string prénom;
    int âge;

   
    bool operator<(const Personne& autre) const {
        if (nom != autre.nom) {
            return nom < autre.nom;
        } else {
            return prénom < autre.prénom;
        }
    }
};


void afficherPersonne(const Personne& personne) {
    cout << personne.nom << " " << personne.prénom << ", âge : " << personne.âge << endl;
}

int main() {
    list<Personne> listePersonnes;
    Personne personne;

  cout << "Entrez les personnes (nom, prénom, âge) ";
    while (true) {
       cin >> personne.nom;
        if (personne.nom.empty()) {
            break;
        }
       cin >> personne.prénom >> personne.âge;
        listePersonnes.push_back(personne);
    }

    listePersonnes.sort();

  cout << "Liste triée par nom et prénom : " << endl;
    for (const Personne& p : listePersonnes) {
        afficherPersonne(p);
    }

    return 0;
}
