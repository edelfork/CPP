/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:02:51 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/27 14:19:40 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point(void);
		Point(Fixed const x, Fixed const y);
		Point& operator=(Point const &next);
		~Point(void);
		Fixed const &getX(void) const;
		Fixed const &getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
#endif