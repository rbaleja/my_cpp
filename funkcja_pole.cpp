/*
 * funkja_pole.cpp
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


double fun(double a, double b)
{	
	return  a * b;
}
int main()

{	double a;
	double b;
	double c;
	std::cout << "Podaj a" << std::endl;
	std::cin >> a;
	
	std::cout << "Podaj b" << std::endl;
	std::cin >> b; 
	
	c = fun(a, b);
	
	std::cout << "Pole wynosi " << c << std::endl;
	
	return 0;
}

