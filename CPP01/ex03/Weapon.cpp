/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:56:08 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/06 15:47:18 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t) : type(t)
{
    return ;
}

Weapon::Weapon(void) : type(NULL)
{}

Weapon::~Weapon(void)
{}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

std::string    Weapon::getType(void) const
{
    return this->type;
}