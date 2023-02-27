/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:26:28 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/02 14:24:02 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    setType("WrongAnimal");
    std::cout << BOLDGREEN << "Create a WrongAnimal." << RESET << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal &next)
{
	this->type = next.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< BOLDRED << "Destroy a WrongAnimal."<< RESET << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << BLUE << getType() << " SOUND!" << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}