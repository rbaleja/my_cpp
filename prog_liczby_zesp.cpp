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
	
	Complex& operator -=(Complex& x) //Przeciazanie opeatora -=
	{
		this->Re -= x.Re;
		this->Im -= x.Im;
		
		return *this;
	}
	
	Complex& operator *=(Complex& x) //Przeciazanie opeatora *=
	{
		this->Re *= (this->Re * x.Re) - (this->Im * x.Im);
		this->Im *= (this->Re * x.Im) + (this->Im * x.Re);
		
		return *this;
	}	
	
	Complex& operator /(Complex& x) //Przeciazanie opeatora /=
	{
		
	double w;
	
		w = (this->Re * this->Re) + (this->Im * this->Im);
	
		this->Re = (this->Re * x.Re) + (this->Re * x.Im)/ w;
		this->Im = (this->Im * x.Im) - (this->Im * x.Re)/ w;
			
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
	char dzialanie;
	
	
	std::cout << "Wybierz dziaanie na liczbach zespolonych: " << std::endl;
	std::cin >> dzialanie;
	
	
	
	if (dzialanie == 43)// sprawdzenie wprowadzonego znaku dodawania
	{
		
	std::cout << "Wybrane dzialanie to dodawanie" << std::endl;		
	std::cout << "Podaj liczbe zaspolona x " << std::endl;
	std:: cin >> x;
	std::cout << "Liczba x ",x.wypisz();
	std::cout << "Podaj liczbe zespolona y " << std::endl;
	std:: cin >> y;
	std::cout << "Liczba y ",y.wypisz();
	x += y;
	std::cout << "Wynik dodawania to " << std::endl;
	x.wypisz();
	
	}

	else if (dzialanie == 45)// sprawdzenie wprowadzonego znaku odejmowania
	{
	
	std::cout << "Wybrane dzialanie to odejmowanie" << std::endl;	
	std::cout << "Podaj liczbe zaspolona x " << std::endl;
	std:: cin >> x;
	std::cout << "Liczba x ",x.wypisz();
	std::cout << "Podaj liczbe zespolona y " << std::endl;
	std:: cin >> y;
	std::cout << "Liczba y ",y.wypisz();
	x -= y;
	std::cout << "Wynik odejmowania to " << std::endl;
	x.wypisz();

	}
	
	else if (dzialanie == 42)// sprawdzenie wprowadzonego znaku mnozenia
	{
	
	std::cout << "Wybrane dzialanie to mnozenie" << std::endl;	
	std::cout << "Podaj liczbe zaspolona x " << std::endl;
	std:: cin >> x;
	std::cout << "Liczba x ",x.wypisz();
	std::cout << "Podaj liczbe zespolona y " << std::endl;
	std:: cin >> y;
	std::cout << "Liczba y ",y.wypisz();
	x *= y;
	std::cout << "Wynik mnozenia to " << std::endl;
	x.wypisz();

	}

	else if (dzialanie == 47)// sprawdzenie wprowadzonego znaku dzielenia
	{
	
	std::cout << "Wybrane dzialanie to dzielenie" << std::endl;	
	std::cout << "Podaj liczbe zaspolona x " << std::endl;
	std:: cin >> x;
	std::cout << "Liczba x ",x.wypisz();
	std::cout << "Podaj liczbe zespolona y " << std::endl;
	std:: cin >> y;
	std::cout << "Liczba y ",y.wypisz();
	x = x / y;
	std::cout << "Wynik dzielenia to " << std::endl;
	x.wypisz();

	}



	else if(dzialanie != 43 || 45 || 42 || 47)
	
		std::cout << " To nie to dzialanie" << std::endl;
		
	
	
	return 0;
}

