/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:02:45 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/27 14:19:45 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{}


Point::Point(Fixed const x, Fixed const y): _x(x), _y(y)
{}

Point::~Point(void)
{}

Point& Point::operator=(Point const &next)
{
    (void) next;
    return (*this);
}

Fixed const &Point::getX(void) const
{
    return _x;
}

Fixed const &Point::getY(void) const
{
    return _y;
}