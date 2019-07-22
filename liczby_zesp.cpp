#include <iostream>

class Complex {
	
	private:
		
		double Re; //Deklaracja zmiennych liczb zespolonych
		double Im;
		
	public:
	
		Complex(double x, double y) { //Konstruktor klasy
		
		Re = x;
		Im = y;
	}
	
	void wypisz(); // Prototyp medody wypisz
	
	double Czesc_Rzecz() { //Zwraca czesc rzeczywista
		
		return Re;
	}
	
	
	double Czesc_Uroj() { //Zwraca czesc urojona
		
		return Im;
	}
	
	friend Complex& operator +(Complex, Complex);
		 
	
  
};
  
	Complex& operator +(Complex x, Complex y)  {
	
	double tmp_Re = x.Czesc_Rzecz() + x.Czesc_Rzecz();
	double tmp_Im = y.Czesc_Uroj() + y.Czesc_Uroj();
	
	Complex *NowyObiekt = new Complex(tmp_Re, tmp_Im);
	
	return (*NowyObiekt);
																																																																																																																																																																																																																																																																																																																																																				
	}	 
  
  
	void Complex::wypisz () { // Funkcja wypisz poza deklaracja klasy ( operator widocznosci ::)
		
		std::cout << Re << "+j" << Im << std::endl;
		
	}





int main()
{
	Complex x(5,2), y(2,6);
	Complex c(0,0);
	
	x.wypisz();
	y.wypisz();
	c = x + y;
	c.wypisz();
	
	
	return 0;
}

