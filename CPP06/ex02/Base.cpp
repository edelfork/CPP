/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:14:46 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/12 12:36:38 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate(void)
{
	std::cout << BOLDGREEN;
	std::srand((unsigned int)std::time(NULL));
	switch (std::rand() % 3)
	{
		case 0:
			std::cout << "Generate A" << std::endl;
			return new A;
		case 1:
			std::cout << "Generate B" << std::endl;
			return new B;
		case 2:
			std::cout << "Generate C" << std::endl;
			return new C;
		
	}
	std::cout << RESET;
	return (0);
}

void	identify(Base* p)
{
	std::cout << YELLOW << "POINTER:" << std::endl;
	A*	a = dynamic_cast<A*>(p);
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);

	if(a)
		std::cout << "Type = A" << std::endl;
	else if (b)
		std::cout << "Type = B" << std::endl;
	else if (c)
		std::cout << "Type = C" << std::endl;
	else
		std::cout << "Type not found..." << std::endl;
	std::cout << RESET;
}

void	identify(Base& p)
{
	std::cout << MAGENTA << "REFERENCE:" << std::endl;
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Type = A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B b = dynamic_cast<B&>(p);
			std::cout << "Type = B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C c = dynamic_cast<C&>(p);
				std::cout << "Type = c" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Type not found..." << std::endl;
			}
		}
	}
	std::cout << RESET;
}