/*
 * wieksze_mniejsze.cpp
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

int main()
{
	int x, y;
	
	std::cout << "Podaj x " << std::endl;
	std::cin >> x;
	
	std::cout << "Podaj y " << std::endl;
	std::cin >> y;
	if  (x = y)
	std::cout << " x jest rowne y " << std::endl;
		 if (x > y)
		std::cout << " x jest wieksze od y " << std::endl;
		
		 if (x < y)
		std::cout << " x jest mniejsze od y " << std::endl;
		
		//else if (x = y)
		//std::cout << " x jest rowne y " << std::endl;	
	
		
	return 0;
}

