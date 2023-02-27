/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:57:24 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/04 13:06:12 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << BOLDGREEN << this->_name << " constructor called." << RESET << std::endl;
	for(int i= 0 ; i < 4; i++)
		this->_inventory[i] = 0;
}

Character::Character(Character const & ref) : _name(ref._name)
{
	for(int i = 0; i < 4; i++)
	{
		if ((ref._inventory)[i])
			(this->_inventory)[i] = (ref._inventory[i])->clone();
	}
	std::cout << BOLDGREEN << this->_name << " ref constructor called." << RESET << std::endl;
}

Character::~Character(void)
{
	for(int i= 0 ; i < 4; i++)
	{
		if(this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << BOLDRED << "Character destructor called." << RESET << std::endl;
}

Character & Character::operator=(Character const & next)
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

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int i = 0;

	if (!m)
		return;
	while ((this->_inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
		return;
	this->_inventory[i] = m;
	std::cout << YELLOW << this->_name << " equipped materia " << m->getType() << " in idx " << i << RESET << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >=4 || !this->_inventory[idx])
		return;
	AMateria *ptr = this->_inventory[idx];
	std::cout << MAGENTA << this->_name << " unequipped " << ptr->getType() << " at idx " << idx << RESET << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	std::string name = this->getName();

	if (idx < 0 || idx >= 4 || !this->_inventory[idx])
		return;
	std::cout << name;
	this->_inventory[idx]->use(target);
}

AMateria * Character::getMateria(int idx)
{
	return this->_inventory[idx];
}