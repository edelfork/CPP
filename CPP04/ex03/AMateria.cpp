/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 09:30:08 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/04 13:04:57 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << BOLDGREEN << "Default constructor called." << RESET << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << BOLDGREEN << this->_type << " constructor called." << RESET << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << BOLDRED << "Destructor called." << RESET << std::endl;
}

AMateria::AMateria(AMateria const & ref) : _type(ref._type)
{
	std::cout << BOLDGREEN << this->_type << " ref constructor called." << RESET << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << BLUE << "AMateria used on " << target.getName() << RESET << std::endl;
}