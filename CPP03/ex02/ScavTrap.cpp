/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:09:38 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/29 18:42:34 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _Name)
{
	this->_keeper_mode = false;
	this->_max_Hit = 100;
	this->_hit_Points = this->_max_Hit;
	this->_start_AD = 20;
	this->_AD = this->_start_AD;
	this->_max_Energy = 50;
	this->_Energy = this->_max_Energy;
	this->_Name = _Name;
	std::cout << BOLDGREEN << "Default change name in: " << _Name << " and join the fight! (Is a ScavTrap)" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout<< BOLDRED << this->_Name << " left the fight as a ScavTrap (or if is dead, someone took the body)."<< RESET << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::guardGate()
{
	if (this->_keeper_mode == false)
		std::cout << BOLDBLUE << this->_Name << " is NOW in Gate keeper mode!" << RESET << std::endl;
	else
		std::cout << BOLDMAGENTA << this->_Name << " is JUST in Gate keeper mode!" << RESET << std::endl;
	this->_keeper_mode = true;
}