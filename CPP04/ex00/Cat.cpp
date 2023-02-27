/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:50:42 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/02 14:25:55 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	setType("Cat");
	std::cout << BOLDGREEN << "Create a Cat." << RESET << std::endl;
}

Cat	&Cat::operator=(Cat &next)
{
	this->type = next.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << BOLDRED << "Destroy a Cat." << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << YELLOW << getType() << " MIAO!" << RESET << std::endl;
}