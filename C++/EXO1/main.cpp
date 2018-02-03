#include <iostream>
#include <cstdlib>
#include "TP1.hpp"

using namespace std;

int main(){
	
	char str[] = "Quelle belle merde !";
	cout << fonctions::strlen_(str) << endl;
	
	char strCopie[] = "Grenouille";
	char strCopie2[15];
	fonctions::strcpy_(strCopie2, strCopie);
	cout << strCopie2 << endl;
	
	char strnCopie[]="Last but not least";
	char strnCopie2[60];
	fonctions::strncpy_(strnCopie2, strnCopie, 60);
	cout<<strnCopie2<<endl;
}
