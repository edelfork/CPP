/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:55:37 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/06 15:45:29 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
# include <iostream>

class Weapon
{
	public:
		Weapon(std::string t);
		Weapon(void);
		~Weapon(void);
		std::string	getType(void) const;
		void		setType(std::string type);
	private:
		std::string type;
};

#endif