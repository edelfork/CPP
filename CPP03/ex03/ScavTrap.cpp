/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:09:38 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/29 18:40:29 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_keeper_mode = false;
	this->_max_Hit = 100;
	this->_hit_Points = this->_max_Hit;
	this->_start_AD = 20;
	this->_AD = this->_start_AD;
	this->_max_Energy = 50;
	this->_Energy = this->_max_Energy;
	this->_Name = "Defalut";
	std::cout << BOLDGREEN << this->_Name << " join the fight! (Is a ScavTrap)" << RESET << std::endl;
}

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

void ScavTrap::guardGate()
{
	if (this->_keeper_mode == false)
		std::cout << BOLDBLUE << this->_Name << " is NOW in Gate keeper mode!" << RESET << std::endl;
	else
		std::cout << BOLDMAGENTA << this->_Name << " is JUST in Gate keeper mode!" << RESET << std::endl;
	this->_keeper_mode = true;
}