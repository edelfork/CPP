/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:02:04 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/27 14:57:44 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const d)
{
	Fixed abc = (a.getX()*b.getY()+a.getY()*c.getX()+b.getX()*c.getY()-a.getY()*b.getX()-a.getX()*c.getY()-c.getX()*b.getY())/2;
	Fixed abd = (a.getX()*b.getY()+a.getY()*d.getX()+b.getX()*d.getY()-a.getY()*b.getX()-a.getX()*d.getY()-d.getX()*b.getY())/2;
	Fixed bcd = (d.getX()*b.getY()+d.getY()*c.getX()+b.getX()*c.getY()-d.getY()*b.getX()-d.getX()*c.getY()-c.getX()*b.getY())/2;
	Fixed cad = (a.getX()*d.getY()+a.getY()*c.getX()+d.getX()*c.getY()-a.getY()*d.getX()-a.getX()*c.getY()-c.getX()*d.getY())/2;

	if(abc == 0)
		return (false);

	return (abc*abd) > 0 && (abc*bcd) > 0 && (abc*cad) > 0;
}
