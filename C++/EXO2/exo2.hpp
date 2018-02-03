#ifndef TP2HPP
#define TP2HPP
#include <iostream>

struct TPersonne{
	std::string id;
	std::string nom;
	std::string prenom;
	std::string mail;
};

namespace people{
	TPersonne* new_personne();
	void affiche(TPersonne *p);
}
#endif
