#ifndef TP3HPP
#define TP3HPP
#include <iostream>
#include "../EXO2/exo2.hpp"
#include "../EXO2/exo2.cpp"

struct TNoeud {
	TNoeud* pred;
	TNoeud* suiv;
	TPersonne* pers;
};

struct TListe{
	TNoeud* tete;
	TNoeud* queue;
};

namespace noeud{
	bool estVide(TListe*);
	bool ajoute(TListe*, TPersonne*); 
	//ajoute une personne dans une liste en créant le noeud
	// Ne doit pas ajouter deux fois le même id !!
	TPersonne* supprime(TListe*, const std::string); 
	//Supprime de la liste l'id de la chaine, renvoie la personne
	//Sinon nullptr
	void affiche(const TListe*); 
	//affiche les champs de chaque noeud de la liste.
}
#endif
