/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:44:58 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/04 12:28:25 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : _type("cure")
{
	std::cout << BOLDGREEN << "Cure default constructor called." << RESET << std::endl;
}

Cure::Cure(Cure const & ref) : _type(ref._type)
{
	std::cout << BOLDGREEN << "Cure ref constructor called." << RESET << std::endl;
}

Cure::~Cure()
{
	std::cout << BOLDRED << this->_type << " destructor called." << RESET << std::endl;
}

Cure & Cure::operator=(Cure const & next)
{
	return *this;
}

std::string const & Cure::getType() const
{
	return this->_type;
}

Cure * Cure::clone() const
{
	Cure *ret = new Cure;
	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::cout << BOLDGREEN << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}