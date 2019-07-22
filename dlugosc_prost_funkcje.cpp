/*
 * dlugosc_prost_funkcje.cpp
 * 
 * Copyright 2019 root <root@raspberrypi>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

double getLenght()
{	
	double dlugosc;
	std::cout << "Podaj długosc prostokata " << std::endl;
	std::cin >> dlugosc;
	return dlugosc;
	
}

double getWidth()
{
	double szerokosc;
	std::cout << "Podaj szerokosc prostokata " << std::endl;
	std::cin >> szerokosc;
	return szerokosc;
}

double getPole()
{
	double pole;
	pole = getLenght() * getWidth();
	std::cout << pole << std::endl;
	return pole;
}
int main()
{	
	getPole();
	
	return 0;
}

