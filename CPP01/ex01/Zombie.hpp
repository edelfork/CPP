/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:19:35 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/05 13:33:12 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
			Zombie(void);
			~Zombie(void);
			Zombie& operator = (Zombie& next);
			std::string	getName(void) const;
			void		setName(std::string name);
			void		call(void) const;
	private:
			std::string	name;
};
Zombie		*newZombie(std::string name);
void		randomChump(std::string name);
Zombie*     zombieHorde( int N, std::string name );

#endif