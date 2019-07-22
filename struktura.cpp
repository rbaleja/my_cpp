
#include <iostream>
#include <string>

	struct PayRoll
	{
		int emplnumber;
		std::string name;
		double hours;
		double payRate;
		double grossPay;
	};
	
	
	struct BookInfo
	{
		std::string title;
		std::string author;
		std::string publisher;
		double price;	
	};

	struct Costs
	{
		double wholesale;
		double retail;
	};
	
	struct Item
	{
		std::string partNum;
		std::string description;
		Costs pricing; // Struktura Costs zagniezdzona w strukturze Item
	};
	
	
	 

int main()
{
	PayRoll deptHead, foreman, assiociate;
	
	assiociate = {234, "Jan Kowalski", 456, 2345};
	
	deptHead.emplnumber = 123;
	foreman.name = "Robert Baleja";
	assiociate.payRate = 2300.23;
	
	
	std::cout << deptHead.emplnumber << std::endl;
	std::cout << foreman.name << std::endl;
	std::cout << assiociate.name << std::endl;
	
	BookInfo booklist[20];
	
	
	for (int i = 0; i < 20; i++)
		booklist[i].price = i;
		
	for(int i = 0; i < 20; i++)
		std::cout << booklist[i].price << std::endl;
	
	
	
	booklist[15].title = "Programowanie"; 
	
	
	std::cout << booklist[15].title << std::endl;
	
	Item wiget;
	
	
	wiget.pricing.wholesale = 100.0;
	wiget.partNum = "AS123";
	
	
	std::cout << wiget.pricing.wholesale << std::endl;
	std::cout << wiget.partNum << std::endl;
	
	
	
	
	return 0;
}

