/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:48:04 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/12 11:52:11 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
    std::cout << BOLDGREEN << "Data constructor" << RESET << std::endl;
}

Data::~Data()
{
    std::cout << BOLDRED << "Data destructor"<< RESET << std::endl;
}

Data& Data::operator=(const Data& next)
{
    return *this;
}

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}