/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:05:58 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/22 13:39:15 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
c.setRawBits(4);
std::cout << "\n------------------------------------------------------------------"<< std::endl;
std::cout << "CAMBI RISPETTO AL MAIN DELLA CONSEGNA (riga 24: c.setRawBits(4))" << std::endl;
std::cout << "get su B: " << b.getRawBits() << std::endl;
std::cout << "get su C: " << c.getRawBits() << std::endl;
std::cout << "FINE CAMBI RISPETTO AL MAIN DELLA CONSEGNA" << std::endl;
std::cout << "------------------------------------------------------------------\n" << std::endl;
return 0;
}