#include <iostream>

int main()
{	
	int n;
	
	long long fib, fib0, fib1;
	
	
	fib0 = 0; // pierwsza liczba Fobonacciego
	
	fib1 = 1; // druga lub n-ta liczba fibonacciego
	
	std::cout << "Podaj liczbe " << std::endl;
	std::cin >> n; 
		
	for( int i = 0; i <= n; i++)
	
		if (i > 1)
		{
			fib = fib0 + fib1; // obliczanie kolejnej liczby Fibonacciego
			
			fib0 = fib1; // zapamiietanie wynik obiczen
			
			fib1 = fib; // dane dla nastepnego obiegu petli
		}
		
		else fib = 1;
		
		std::cout << fib << std::endl;
		
		
	return 0;
}

