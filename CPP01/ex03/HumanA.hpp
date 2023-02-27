/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:05:47 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/06 15:35:24 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	public:
			HumanA(std::string name, Weapon &w);
			~HumanA(void);
			void	attack();
			
	private:
			Weapon		&weapon;
			std::string	name;
};

#endif