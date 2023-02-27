/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:06:01 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/22 14:53:14 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_stored = 0;
}

Fixed::Fixed(Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int value)
{
	this->_stored = (value << this->_fract);
}

Fixed::Fixed(const float value)
{
	this->_stored = roundf(value * (1 << this->_fract));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed &next)
{
	_stored = next.getRawBits();
	return(*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_stored);
}

void  Fixed::setRawBits(int const raw)
{
	this->_stored = raw;
}

int Fixed::toInt() const
{
	return (this->_stored >> this->_fract);
}

float Fixed::toFloat() const
{
	return ((float)this->_stored / (1 << this->_fract));
}

std::ostream& operator<<(std::ostream & os, Fixed const & i)
{
	return(os << (i.toFloat()));
}

Fixed &Fixed::operator++()
{
	_stored++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return (temp);
}

Fixed &Fixed::operator--()
{
	_stored--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return (temp);
}

Fixed Fixed::operator+(const Fixed& next)
{
	Fixed ret;

	ret.setRawBits(_stored + next._stored);
	return (ret);
}

Fixed Fixed::operator-(const Fixed& next)
{
	Fixed ret;

	ret.setRawBits(_stored - next._stored);
	return (ret);
}

Fixed Fixed::operator*(const Fixed& next)
{
	Fixed ret;

	ret.setRawBits((_stored * next._stored >> 8));
	return (ret);
}

Fixed Fixed::operator/(const Fixed& next)
{
	Fixed ret(this->toFloat() / next.toFloat());
	return (ret);
}

bool Fixed::operator==(const Fixed& next)
{
	return(_stored == next._stored);
}

bool Fixed::operator!=(const Fixed& next)
{
	return(_stored != next._stored);
}

bool Fixed::operator<=(const Fixed& next)
{
	return(_stored <= next._stored);
}

bool Fixed::operator>=(const Fixed& next)
{
	return(_stored >= next._stored);
}

bool Fixed::operator<(const Fixed& next)
{
	return(_stored < next._stored);
}

bool Fixed::operator>(const Fixed& next)
{
	return(_stored > next._stored);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return(a._stored < b._stored ? a:b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return(a._stored > b._stored ? a:b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	return(a._stored < b._stored ? a:b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	return(a._stored > b._stored ? a:b);
}