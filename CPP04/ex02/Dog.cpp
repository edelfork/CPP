/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:36:09 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/02 16:06:36 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	brain = new Brain();
	std::cout << BOLDGREEN << "Create a Dog." << RESET << std::endl;
}

Dog	&Dog::operator=(Dog &next)
{
	this->type = next.type;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << BOLDRED << "Destroy a Dog." << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << YELLOW << getType() << " BAU!" << RESET << std::endl;
}