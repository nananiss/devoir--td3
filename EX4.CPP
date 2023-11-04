#include <iostream>
#include <set>
#include <vector>
#include <list>


template <typename T>
bool recherche(const set<T>& ensemble, const T& valeur) {
    return ensemble.find(valeur) != ensemble.end();
}


template <typename InputIterator, typename T>
bool recherche(InputIterator debut, InputIterator fin, const T& valeur) {
    while (debut != fin) {
        if (*debut == valeur) {
            return true;
        }
        ++debut;
    }
    return false;
}

int main() {
    // Étape 1 : Créer un set paramètre avec des entiers de 1 à 100
    std::set<int> ensemble;
    for (int i = 1; i <= 100; ++i) {
        ensemble.insert(i);
    }

    // Étape 2 : Utiliser la fonction de recherche avec un set en paramètre
    int valeurRecherchee = 42;
    bool resultat1 = recherche(ensemble, valeurRecherchee);
    std::cout << "La valeur " << valeurRecherchee << " est présente dans le set : " << resultat1 << std::endl;

    // Étape 3 : Utiliser la fonction de recherche avec des itérateurs en paramètres
    std::vector<std::string> vecteurString = { "un", "deux", "trois", "quatre", "cinq" };
    bool resultat2 = recherche(vecteurString.begin(), vecteurString.end(), std::string("deux"));
    std::cout << "La valeur 'deux' est présente dans le vecteur de string : " << resultat2 << std::endl;

    std::list<int> listeEntiers = { 10, 20, 30, 40, 50 };
    bool resultat3 = recherche(listeEntiers.begin(), listeEntiers.end(), 30);
    std::cout << "La valeur 30 est présente dans la liste d'entiers : " << resultat3 << std::endl;

    float tableauFloat[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    bool resultat4 = recherche(std::begin(tableauFloat), std::end(tableauFloat), 3.3f);
    std::cout << "La valeur 3.3 est présente dans le tableau de float : " << resultat4 << std::endl;

    return 0;
}
