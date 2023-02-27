/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:19:14 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/05 13:35:16 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "NONAME Zombie";
}

Zombie::~Zombie(void)
{
	std::cout << this->getName() << " has been destroyed!" << std::endl;
}

std::string	Zombie::getName(void) const
{
	return (this->name);
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

void	Zombie::call(void) const
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
