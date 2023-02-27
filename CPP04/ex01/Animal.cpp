/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:26:28 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/02 17:27:15 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	setType("Animal");
	std::cout << BOLDGREEN << "Create an Animal." << RESET << std::endl;
}

Animal	&Animal::operator=(Animal &next)
{
	this->type = next.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << BOLDRED << "Destroy an Animal." << RESET << std::endl;
}

void    Animal::makeSound() const
{
	std::cout << YELLOW << getType() << " SOUND!" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}