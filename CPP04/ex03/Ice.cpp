/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:42:15 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/04 13:06:21 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : _type("ice")
{
	std::cout << BOLDGREEN << "Ice default constructor called." << RESET << std::endl;
}

Ice::Ice(Ice const & ref) : _type(ref._type)
{
	std::cout << BOLDGREEN << "Ice ref constructor called." << RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << BOLDRED << this->_type << " destructor called." << RESET << std::endl;
}

Ice & Ice::operator=(Ice const & next)
{
	return *this;
}

std::string const & Ice::getType() const
{
	return this->_type;
}

Ice * Ice::clone() const
{
	Ice *ret = new Ice;
	return (ret);
}

void Ice::use(ICharacter& target)
{
	std::cout << BOLDWHITE << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}