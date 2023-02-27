/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:57:07 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/29 18:40:43 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_max_Hit = 100;
	this->_hit_Points = this->_max_Hit;
	this->_start_AD = 30;
	this->_AD = this->_start_AD;
	this->_max_Energy = 100;
	this->_Energy = this->_max_Energy;
	this->_Name = "Defalut";
	std::cout << BOLDGREEN << this->_Name << " join the fight! (Is a FragTrap)" << RESET << std::endl;
}

FragTrap::FragTrap(std::string &_Name)
{
	this->_max_Hit = 100;
	this->_hit_Points = this->_max_Hit;
	this->_start_AD = 30;
	this->_AD = this->_start_AD;
	this->_max_Energy = 100;
	this->_Energy = this->_max_Energy;
	this->_Name = _Name;
	std::cout << BOLDGREEN << "Default change name in: " << _Name << " and join the fight! (Is a FragTrap)" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<< BOLDRED << this->_Name << " left the fight as a FragTrap (or if is dead, someone took the body)."<< RESET << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << RED << "GIVE ME A FIVE! " << YELLOW << std::endl;
	std::cout << "           ___..__" << std::endl;
	std::cout << "  __..--\"\"\" ._ __.'" << std::endl;
	std::cout << "              \"-..__" << std::endl;
	std::cout << "            '\"--..__\";" << std::endl;
	std::cout << " ___        '--...__\"\";" << std::endl;
	std::cout << "    `-..__ '\"---..._;\"" << std::endl;
	std::cout << "          \"\"\"\"----'  " << CYAN << "_.-._" << std::endl;
	std::cout << "                    | | | |_" << std::endl;
	std::cout << "                    | | | | |" << std::endl;
	std::cout << "                    | | | | |" << std::endl;
	std::cout << "                  _ |  '-._ |" << std::endl;
	std::cout << "                  \\`\\`-.'-._;" << std::endl;
	std::cout << "                   \\    '   |" << std::endl;
	std::cout << "                    \\  .`  /" << std::endl;
	std::cout << "                     |    | "<< RESET << std::endl;
}