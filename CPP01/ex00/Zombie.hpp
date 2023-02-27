/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:23:17 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/05 12:41:30 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
			Zombie(std::string s);
			Zombie(void);
			~Zombie(void);
			Zombie& operator = (Zombie& next);
			std::string	getName(void) const;
			void		call(void) const;
	private:
			std::string	name;
};
Zombie		*newZombie(std::string name);
void		randomChump(std::string name);

#endif