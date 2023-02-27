/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:50:13 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/29 18:38:04 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_hitFrag = FragTrap::_max_Hit;
	this->_energyScav = ScavTrap::_max_Energy;
	this->_start_AD = FragTrap::_start_AD;
	this->_Name = "Defalut_clap_trap";
	std::cout << BOLDGREEN << _Name << " join the fight! (Is a DiamondTrap)" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string _Name)
{
	ClapTrap::_Name = _Name + "_clap_name";
	this->_hitFrag = FragTrap::_max_Hit;
	this->_energyScav = ScavTrap::_max_Energy;
	this->_start_AD = FragTrap::_start_AD;
	this->_Name = _Name;
	std::cout << BOLDGREEN << _Name << " join the fight! (Is a DiamondTrap)" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<< BOLDRED << this->_Name << " left the fight as a DiamondTrap (or if is dead, someone took the body)."<< RESET << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << BLUE << "Who am I?" << std::endl;
	std::cout << "I'm a girl who loves my island" << std::endl;
	std::cout << "And the girl who loves the sea" << std::endl;
	std::cout << "It calls me" << std::endl;
	std::cout << "I am the daughter of the village chief" << std::endl;
	std::cout << "We are descended from voyagers" << std::endl;
	std::cout << "Who found their way across the world" << std::endl;
	std::cout << "They call me" << std::endl;
	std::cout << "I've delivered us to where we are" << std::endl;
	std::cout << "I have journeyed farther" << std::endl;
	std::cout << "I am everything I've learned and more" << std::endl;
	std::cout << "Still, it calls me" << std::endl;
	std::cout << "And the call isn't out there at all, it's inside me" << std::endl;
	std::cout << "It's like the tide" << std::endl;
	std::cout << "Always falling and rising" << std::endl;
	std::cout << "I will carry you here in my heart, you'll remind me" << std::endl;
	std::cout << "That come what may" << std::endl;
	std::cout << "I know the way" << std::endl;
	std::cout << "I am Moana" << RESET << std::endl;
	std::cout << std::endl << BOLDBLUE << "Joke.. I am " << _Name << " and my ClapTrap name is " << ClapTrap::get_Name() << std::endl;
}