/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:05:47 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/29 15:27:26 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout<< std::endl << BOLDBLUE << "It's boring to just have traps, let's have a fight!"<< RESET << std::endl <<std::endl;
	ClapTrap bob = ClapTrap("Bob");
	ClapTrap harl = ClapTrap("Harl");
	ScavTrap goku = ScavTrap("Goku");
	std::cout << std::endl;
	harl.attack(bob.get_Name());
	bob.takeDamage(harl.get_AD());
	harl.attack(bob.get_Name());
	bob.takeDamage(harl.get_AD());
	harl.attack(bob.get_Name());
	bob.beRepaired(harl.get_AD());
	bob.attack(harl.get_Name());
	harl.takeDamage(bob.get_AD());
	goku.guardGate();
	bob.attack(harl.get_Name());
	harl.takeDamage(bob.get_AD());
	bob.attack(harl.get_Name());
	harl.takeDamage(bob.get_AD());
	bob.attack(harl.get_Name());
	harl.takeDamage(bob.get_AD());
	goku.guardGate();
	bob.attack(goku.get_Name());
	goku.takeDamage(bob.get_AD());
	bob.attack(harl.get_Name());
	harl.takeDamage(bob.get_AD());
	harl.attack(bob.get_Name());
	bob.takeDamage(harl.get_AD());
	bob.attack(goku.get_Name());
	goku.beRepaired(bob.get_AD());
	bob.attack(goku.get_Name());
	goku.beRepaired(bob.get_AD());
	bob.attack(goku.get_Name());
	goku.takeDamage(bob.get_AD());
	bob.attack(goku.get_Name());
	goku.takeDamage(bob.get_AD());
	std::cout << std::endl;
	return (0);
}