/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:06:03 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/22 13:28:07 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed &fixed);
		Fixed& operator=(const Fixed& next);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _stored;
		static const int _fract = 8;
};

#endif