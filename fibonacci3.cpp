#include <iostream>

int fib(int n)
{
	//if (n == 0)
		//return 0;
	//if (n == 1)
		//return 1;
		
	long long fib0 = 0;
	
	long long fib1 = 1; 
	
	for( int i = 0; i <= n; i++)
	
		if (i > 1)
		{
			n = fib0 + fib1;
			fib0 = fib1;
			fib1 = n;
		}
		
		else n = 1;
		
		std::cout << n << std::endl;
		
		return 0;
}

//wersja z pętlą do domu (fib(100) ma się policzyć w <1s)

int main()
{
	
	//for (int i = 0; i < 10; i++)
	//	std::cout << fib(i) << std::endl;
	std::cout << fib(100) << std::endl;
}
