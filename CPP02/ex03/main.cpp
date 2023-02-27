/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:02:22 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/27 15:08:06 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(int argc, char **argv)
{
	std::cout << std::boolalpha
		<< "a(0,0), b(0,0), c(0,0), point(1,1): " << bsp(Point(0,0), Point(0,0), Point(0,0), Point(1,1)) << std::endl
		<< "a(2,0), b(1,0), c(0,1), point(1,1): " << bsp(Point(2,0), Point(1,0), Point(0,1), Point(1,1)) << std::endl
		<< "a(5,1), b(7,3), c(0,0), point(0,0): " << bsp(Point(5,1), Point(3,7), Point(0,0), Point(0,0)) << std::endl
		<< "a(5,1), b(7,3), c(0,0), point(1,1): " << bsp(Point(5,1), Point(3,7), Point(0,0), Point(1,1)) << std::endl
		<< "a(-1,-1), b(8,1), c(4,7), point(3,2): " << bsp(Point(-1,-1), Point(8,1), Point(4,7), Point(3,2)) << std::endl
		<< "a(-1,-1), b(8,1), c(4,7), point(7,-2): " << bsp(Point(-1,-1), Point(8,1), Point(4,7), Point(7,-2)) << std::endl;
	return (0);
}