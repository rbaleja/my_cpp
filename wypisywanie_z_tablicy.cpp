// Wpisywanie liczb 1-10 do tablicy 
// Wypisywanie liczb z tablicy 
// Wypisywannie liczb z tablicy w odwrotnej kolejnosci


#include <iostream>

int main()
{
	const int rozmiar = 11;
	int i; //licznik petli
	int tab[rozmiar]; // deklaracja tablicy o liczbie elementow zmiennej "rozmiar"
	
	for (i = 0; i < rozmiar; i++) //wpisanie liczb do tablicy 
		tab[i] = i;
	
	for (i = 0; i < rozmiar; i++) //wypisanie liczb z tablicy
		std::cout << tab[i] << std::endl;
	
	for (i = rozmiar - 1; i >= 0; i--) //wypisanie liczb z tablicy w odwrotnej kolejnosci
		std::cout << tab[i] << std::endl;
		
	return 0;
}

