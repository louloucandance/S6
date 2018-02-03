#include <iostream>
#include <cstdlib>
#include "exo2.hpp"

using namespace std;

int main(){
	TPersonne* p =new TPersonne;
	p= people::new_personne();
	cout<<endl;
	people::affiche(p);
	delete p;
}
