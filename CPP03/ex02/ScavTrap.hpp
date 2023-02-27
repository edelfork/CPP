/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:03:33 by gimartin          #+#    #+#             */
/*   Updated: 2023/02/18 11:53:16 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# define override
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	private:
		bool _keeper_mode;
	public:
		ScavTrap(void);
		ScavTrap(std::string _Name);
		~ScavTrap(void);
		ScavTrap& operator=(ScavTrap& next);
		void beRepaired(unsigned int amount) override;
		void guardGate();
};
#endif