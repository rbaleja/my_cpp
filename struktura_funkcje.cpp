#include <iostream>


struct Rectangle // struktura danych jako zmienna "box"
	{
		double dlugosc;
		double szerokosc;
		double pole;
		
	};
	
double obliczanie(double x, double y)// funkcja obiczajaca pole
	{
		return x * y;
		
	}

int x,y;



int main()
	
{	
	
	
	Rectangle box; // nadanie struktury nazwy zmiennej "box"
	
	box.pole = obliczanie(box.dlugosc, box.szerokosc);
	
	std::cout << "Podaj dlugosc " << std::endl;
	std::cin >> x;
	
	std::cout << "podaj szerokosc " << std::endl;
	std::cin >> y;
	
	std::cout << obliczanie(x, y) << std::endl;// wynik zwracany przez funcje obicznie
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

