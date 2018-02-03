#include <iostream>
#include <cstdlib>
#include "exo3.hpp"

using namespace std;

bool noeud::estVide(TListe* liste) {
	return(liste == nullptr);
}


bool noeud::ajoute(TListe* liste, TPersonne* perso){	
	//ajoute une personne dans une liste en créant le noeud
	// Ne doit pas ajouter deux fois le même id !!
	bool ajout;
	TNoeud* nouveauNoeud = new TNoeud;
	//Si la liste est vide, on ajoute directement le premier élément.
	if(noeud::estVide(liste)){
		nouveauNoeud->pred=nullptr;
		nouveauNoeud->suiv=nullptr;
		nouveauNoeud->pers= perso;
		ajout=true;		
	}
	//Sinon on parcourt la liste avec un noeud courant.
	else{
		TNoeud* noeudCourant = liste->tete;
		
		while((noeudCourant->pers->id != perso->id) || noeudCourant->suiv != nullptr)
			noeudCourant=noeudCourant->suiv;
	//Si l'on arrive à la fin de la liste, on ajout l'élément à la fin
		if(noeudCourant->suiv==nullptr){
			nouveauNoeud->pred=noeudCourant;
			nouveauNoeud->suiv=nullptr;
			nouveauNoeud->pers= perso;
			noeudCourant->suiv=nouveauNoeud;
			ajout=true;
		}
		//Si l'id est déjà utilisé, l'ajout ne se fait pas et le prog renverra false.
		else if(noeudCourant->pers->id != perso->id){
			ajout=false;
		}
	}
	return ajout;	
} 
	
TPersonne* noeud::supprime(TListe* liste, const string identifiant){
	/*Supprime de la liste l'id de la chaine, renvoie la personne
	Sinon nullptr
	
	Si on trouve l'id : on fait pointer le suiv du précédent sur le suivant,
	et vice versa (pour supprimer le maillon
	 
	sinon on parcourt la liste
	*/
	
	TNoeud* noeudCourant = liste->tete;
	while(noeudCourant->pers->id != identifiant || noeudCourant->suiv != nullptr)
		noeudCourant=noeudCourant->suiv;
		//SI l'on arrive au bout de la liste dans trouver l'id correspondant, on retourne faux.
	if (noeudCourant->suiv == nullptr)
		return 0;
	else{
		//SINON le noeud précédant le noeud courant pointe sur le suivant et le suivant sur le précédent.
		noeudCourant->pred->suiv=noeudCourant->suiv;
		noeudCourant->suiv->pred = noeudCourant->pred;
		return noeudCourant->pers;
	}
}

void noeud::affiche(const TListe* liste){
	//affiche les champs de chaque noeud de la liste.
	
	TNoeud* noeudCourant = liste->tete;
	
	while(noeudCourant->suiv != nullptr){
		people::affiche(noeudCourant->pers);
		noeudCourant=noeudCourant->suiv;
	}
}

