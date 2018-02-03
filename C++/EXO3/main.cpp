#include <iostream>
#include <cstdlib>
#include "exo3.hpp"

using namespace std;

int main(){
	
	//Déclaration des personnes : 
	
	TPersonne* picsou =new TPersonne;
	picsou->id="1";
	picsou->nom="Canard";
	picsou->prenom="Picsou";
	picsou->mail="piscou@conf.it";
	
	TPersonne* donald =new TPersonne;
	donald->id="2";
	donald->nom="Duck";
	donald->prenom="Donald";
	donald->mail="donald@laq.ue";
	
	TPersonne* riri =new TPersonne;
	riri->id="3";
	riri->nom="Patito";
	riri->prenom="Riri";
	riri->mail="riri@oran.ge";

	TPersonne* fifi =new TPersonne;
	fifi->id="4";
	fifi->nom="Patinho";
	fifi->prenom="Fifi";
	fifi->mail="fifi@gratt.ons";
	
	TPersonne* loulou =new TPersonne;
	loulou->id="5";
	loulou->nom="Entechen";
	loulou->prenom="Loulou";
	loulou->mail="loulou@magr.et";
	
	TPersonne* mickey = new TPersonne;
	mickey->id="3"; 
	mickey->nom="Mouse";
	mickey->prenom="Mickey";
	mickey->mail="mickey@froma.ge";
	
	TListe* mare = new TListe;
	
	cout<<"EXERCICE 3 - TP1"<<endl<<endl<<"Louise GENTILLET - 21513763"<<endl<<endl<<"Ajout des personnages...";
		
	noeud::ajoute(mare, donald);
	noeud::ajoute(mare, fifi);
	noeud::ajoute(mare, riri);
	noeud::ajoute(mare, picsou);
	noeud::ajoute(mare, loulou);
	noeud::ajoute(mare, mickey);
	noeud::affiche(mare);
	cout<<"suppression de loulou"<<endl;
	noeud::supprime(mare, "5");
	cout<<"suppression de picsou"<<endl;
	noeud::supprime(mare, "1");
	noeud::affiche(mare);
	 
	return 0;
	
}
