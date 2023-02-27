/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:27:46 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/04 13:06:39 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
	std::cout << BOLDGREEN << "Materia default constructor called." << RESET << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (ref._inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}
	std::cout << BOLDGREEN << "Materia ref constructor called." << RESET << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for(int i= 0 ; i < 4; i++)
	{
		if(this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << BOLDRED << "Materia destructor called." << RESET << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & next)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (next._inventory[i])
			this->_inventory[i] = (next._inventory[i])->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while ((this->_inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
		return ;
	(this->_inventory)[i] = m;
	std::cout << "Materia " << m->getType() << " learned\n";
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while ((this->_inventory)[i] && ((this->_inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->_inventory)[i])
		return (NULL);
	std::cout << "Materia " << type << " created" << std::endl;
	return (((this->_inventory)[i])->clone());
}