#include <iostream>

unsigned long long  int fib;
unsigned long long  int i;
unsigned long long  int n;



unsigned long long fun(unsigned long long  &n)	// funkcja Fibobaciego
{
	 long long int fib0 = 0;
	 long long int fib1 = 1;
	
	for (long long int i = 0; i <= n; i++)
			
			if (i > 1)
				{
					fib = fib0 + fib1; // obliczanie kolejnej liczby Fibonacciego
			
					fib0 = fib1; // zapamiietanie wyniku obiczen
			
					fib1 = fib; // dane do petli
				}
				
				else
				    fib = 1;
			
	 return fib;
	
}


	
int main()


	
{
	
	std::cout << "Podaj liczbe " << std::endl;
	
	std::cin >> n;
	
	for (i = 0; i < n; i++)
	
		std::cout << fun(i) << std::endl;
	
	
	return 0;
}

