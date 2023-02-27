/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:02:33 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/29 18:05:26 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_Name = "Default";
	this->_max_Hit = 10;
	this->_hit_Points = this->_max_Hit;
	this->_start_AD = 0;
	this->_AD = this->_start_AD;
	this->_max_Energy = 10;
	this->_Energy = this->_max_Energy;
	std::cout << BOLDGREEN << _Name << " join the fight!" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string _Name)
{
	this->_Name = _Name;
	this->_max_Hit = 10;
	this->_hit_Points = this->_max_Hit;
	this->_start_AD = 0;
	this->_AD = this->_start_AD;
	this->_max_Energy = 10;
	this->_Energy = this->_max_Energy;
	std::cout << BOLDGREEN << _Name << " join the fight!" << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout<< BOLDRED << this->_Name << " left the fight (or if is dead, someone took the body)."<< RESET << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& next)
{
	this->_Name = next._Name;
	this->_hit_Points = next._hit_Points;
	this->_AD = next._AD;
	this->_Energy = next._Energy;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if(!get_Hit())
	{
		std::cout<< get_Name() << " can't attack because is dead!" << std::endl;
		this->_AD = 0;
		return;
	}
	else if (!get_Energy())
	{
		std::cout<< get_Name() << " can't attack because has no energy!" << std::endl;
		this->_AD = 0;
		return;
	}
	else
		this->_Energy--;
	this->_AD+=1;
	std::cout << YELLOW << "ClapTrap " << get_Name() << " attacks " << target << ", try to make " << get_AD() << " points of damage! (Energy of " << get_Name() << ": " << get_Energy() << ")" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > get_Hit())
		this->_hit_Points = 0;
	else
		this->_hit_Points -= amount;
	std::cout<< RED << this->_Name << " take " << amount << " damage. " << get_Hit() << " remaning. (Energy of " << get_Name() << ": " << get_Energy() << ") " << RESET;
	if (this->_hit_Points <= 0)
		std::cout << BOLDRED << this->get_Name() << " is dead!";
	std::cout<< RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!get_Energy() || !get_Hit())
	{
		std::cout << "Can't repair yourself..." << std::endl;
		return ;
	}
	else
		this->_Energy--;
	if (this->_hit_Points + amount >= _max_Hit)
		this->_hit_Points = _max_Hit;
	else
		this->_hit_Points += amount;
	std::cout << GREEN << this->_Name << " restore " << amount << " HP. " << get_Hit() << " remaning. (Energy of " << get_Name() << ": " << get_Energy() << ")" << RESET << std::endl;
}

std::string ClapTrap::get_Name() const
{
	return(this->_Name);
}

int ClapTrap::get_Energy() const
{
	return(this->_Energy);
}

int ClapTrap::get_Hit() const
{
	return(this->_hit_Points);
}

int ClapTrap::get_AD() const
{
	return (this->_AD);
}