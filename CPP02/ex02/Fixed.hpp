/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:06:03 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/22 14:38:28 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed &fixed);
		Fixed(const Fixed &fixed);
		Fixed(const int value);
		Fixed(const float value);
		Fixed& operator=(const Fixed& next);
		Fixed operator+(const Fixed& next);
		Fixed operator-(const Fixed& next);
		Fixed operator*(const Fixed& next);
		Fixed operator/(const Fixed& next);
		bool operator==(const Fixed& next);
		bool operator!=(const Fixed& next);
		bool operator<(const Fixed& next);
		bool operator>(const Fixed& next);
		bool operator<=(const Fixed& next);
		bool operator>=(const Fixed& next);
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(Fixed const &a, Fixed const &b);
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(Fixed const &a, Fixed const &b);
	private:
		int _stored;
		static const int _fract = 8;
};

std::ostream& operator<<(std::ostream & os, Fixed const & i);

#endif