/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:20:18 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/05 13:33:34 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
		Zombie  *z;
		int		i;

		z = new Zombie[N];
		i = 0;
		while(i < N)
		{
			z[i].setName(name);
			i++;
		}
	return (z);
}