/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:27:22 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/02 14:23:21 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	setType("WrongCat");
	std::cout<< BOLDGREEN << "Create a WrongCat." << RESET << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat &next)
{
	this->type = next.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout<< BOLDRED << "Destroy a WrongCat."<< RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << YELLOW << getType() << " MIAO!"<< RESET << std::endl;
}