#include <iostream>

int main()
{
	int num = 4;
	
	std::cout << ++num << std::endl;
	
	std::cout << num++ << std::endl;
	
	int x = 0;
	
	int y;
	
	y = x++;
	
	std::cout << x << std::endl;
	 x = 0;
	if (++x)
		std::cout << "To prawda! \n";
		else 
 		std::cout << "To falsz! \n";
	
	return 0;
}
