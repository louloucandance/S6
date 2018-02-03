#include <iostream>
#include <cstdlib>
#include "TP1.hpp"

using namespace std;

size_t fonctions::strlen_(const char* str){
	
	size_t compteur=0;
	while(*(str++)!=0) compteur++;
	return compteur;
		
}

////////////////////////////////////////////////////////////////////////

void fonctions::strcpy_(char *destination, const char *source){
	
	while (*(destination++ )= *(source++));
	
}

////////////////////////////////////////////////////////////////////////

char* fonctions::strncpy_(char *destination, const char *source, size_t num){
	
	while (num != 0) 
	{
		if(*source == '\0')
			*(destination++)='0';
		
		else
			*(destination++ ) = *(source++);
			
		num--;
	}
	return destination;
		
}
