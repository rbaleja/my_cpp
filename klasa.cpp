#include <iostream>

class Rectangle {
	private:
		double width;
		double length;
		
	public:
	
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
    
};

	void Rectangle::setWidth(double w)
	{
			if (w > 0)
				width = w;
				else
				{
					std::cout << "Bledne dane wejsciowe " << std::endl;
				}
	}

	void Rectangle::setLength(double len)
	{
			if (len > 0)
				length = len;
				else
				{
					std::cout << "Bledne dane wejsciowe " << std::endl;
				}
	}

	double Rectangle::getWidth() const
	{
		return width;
	}
	
	double Rectangle::getLength() const
	{
		return length;
	}
	
	
	double Rectangle::getArea() const
	{
		return width * length;
	}


int main()
{	
	
	double rectWidth;
	double rectLength;
	
	
	Rectangle box;//Tworzy obiekt box typu Rectangle
	Rectangle *rectPtr = nullptr;//Tworzy wskaznik na Rectangle
	rectPtr = new Rectangle;//Zmienna rectPtr zawirajaca wskaznik obiektu box
	
	std::cout << "Podaj szerokosc " << std::endl;
	std::cin >> rectWidth;
	std::cout << "Podaj dlugosc " << std::endl;
	std::cin >> rectLength;
	
	rectPtr->setWidth(rectWidth);//Wkaznik  z operatorem -> do wywolania metody w obiekcie box
	rectPtr->setLength(rectLength);//j/w
	
	std::cout << "Pole prostokata " << rectPtr->getArea() << std::endl;
	delete rectPtr;
	
	return 0;
}

