/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:05:47 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/29 14:51:31 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout<< std::endl << BOLDBLUE << "It's boring to just have traps, let's have a fight!"<< RESET << std::endl <<std::endl;
	ClapTrap bob = ClapTrap("Bob");
	ClapTrap harl = ClapTrap("Harl");
	ScavTrap goku = ScavTrap("Goku");
	FragTrap crilin = FragTrap("Crilin");
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
	std::cout << goku.get_Name() << " win the fight! So " << crilin.get_Name() << " scream: ";
	crilin.highFivesGuys();
	std::cout << std::endl;
	return (0);
}