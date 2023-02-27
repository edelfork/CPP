/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:06:37 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/06 15:35:14 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	public:
			HumanB(std::string name);
			~HumanB(void);
			void	attack();
			void	setWeapon(Weapon &w);
	private:
		Weapon		*weapon;
		std::string	name;
};

#endif