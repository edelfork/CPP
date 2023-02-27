/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:57:25 by gimartin          #+#    #+#             */
/*   Updated: 2023/02/18 11:55:49 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# define override
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		int _hitFrag;
	public:
		FragTrap(void);
		FragTrap(std::string &_Name);
		~FragTrap(void);
		FragTrap& operator=(FragTrap& next);
		void highFivesGuys(void);
};

#endif