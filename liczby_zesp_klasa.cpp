#include <iostream>

class Complex {
	
	private:
		
		double Re; //Deklaracja zmiennych liczb zespolonych
		double Im;
		
	public:
	
	Complex(double x, double y)  //Konstruktor klasy
	{		
		Re = x;
		Im = y;
	}
		
	double Czesc_Rzecz() //Zwraca czesc rzeczywista
	{ 		
		return Re;
	}
		
	double Czesc_Uroj()  //Zwraca czesc urojona
	{		
		return Im;
	}

	Complex& operator +=(Complex& x) // Przciazenie operatora +=
	{ 
		this->Re += x.Re;
		this->Im += x.Im;
		
		return *this;			
	}
	
	void wypisz() { // Metoda wypisz
		
		std::cout << this->Re << "+j" << this->Im << std::endl;
	}
	
	
	friend std::istream& operator >>(std::istream& is, Complex& x); // Funkcja zaprzyjazniona, przecizenie operatora >>

	
};

	std::istream& operator >>(std::istream& is, Complex& x) // Pobieranie liczb od uzytkownika
	{	
		std::cout << "Podaj czesc rzeczywista " << std::endl;
		is >> x.Re;
		std::cout << "Podaj czesc urojona " << std::endl;
		is >> x.Im;
		
		return is;
	}

int main()


{
	Complex x(0,0), y(0,0);
	
	std::cout << "Podaj liczbe zaspolona x " << std::endl;
	std:: cin >> x;
	std::cout << "Liczba x ",x.wypisz();
	std::cout << "Podaj liczbe zespolona y " << std::endl;
	std:: cin >> y;
	std::cout << "Liczba y ",y.wypisz();
	x += y;
	std::cout << "Wynik dodawania to " << std::endl;
	x.wypisz();
	
	
	
	
	return 0;
}

