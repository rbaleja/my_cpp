/*
 * tablicetest.cpp
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
	const int rozmiar = 9;

int tab[rozmiar] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
//for (int licznik = 0; licznik > rozmiar; licznik--)
  //  std::cout << tab[licznik] << std::endl;

//for (int licznik = 9; licznik > rozmiar; licznik--)
	//std::cout << tab[licznik] << std::endl;
	
	for (int i=9; 0<=i; i--)
   std::cout << tab[i];
	
	return 0;
}

