#include <iostream>
#include <cstdlib>
#include "exo2.hpp"


using namespace std;


TPersonne* people::new_personne(){
	TPersonne* pe = new TPersonne;
	cout << "Id : ";
	cin >> pe -> id;
	cout << "Prenom : ";
	cin >> pe -> prenom;
	cout << "Nom : ";
	cin >> pe -> nom;
	cout << "Adresse mail : ";
	cin >> pe -> mail;
	
 	return pe;
}

void people::affiche(TPersonne *p){
	cout << "id : " << p->id << "- nom : "<< p->nom << "- prenom : " << p->prenom << "- mail : " << p->mail << endl;
}
