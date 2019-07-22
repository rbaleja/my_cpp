#include <iostream>

struct Kolo 
	{
		double promien; //promien kola
		double srednica; //srednica kola
		double pole; // wynik pole kola
	};
	
	
Kolo fun()
	{
		Kolo temp; //tymczasowa struktura Kolo
		temp.promien = 10.0; //zapisanie promenia kola
		temp.srednica = 20.0; //zapisania srednnicy kola
		temp.pole = 314.159; //zapisanie pola kola
		
		return temp;// zrwocenie tymczasowej struktury
	}

 Kolo fun();

int main()
{
	Kolo mojepole;
	
	mojepole = fun();
	
	std::cout << mojepole.pole << std::endl;
	
	
	return 0;
}

