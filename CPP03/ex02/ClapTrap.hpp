/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:42:59 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/29 12:00:47 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#include <iostream>

class ClapTrap
{
protected:
	std::string _Name;
	int _max_Hit;
	int _max_Energy;
	int _start_AD;
	unsigned int _hit_Points;
	unsigned int _Energy;
	unsigned int _AD;
public:
	ClapTrap(void);
	ClapTrap(std::string _Name);
	~ClapTrap(void);
	ClapTrap& operator=(ClapTrap& next);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	std::string get_Name(void) const;
	int get_Energy(void) const;
	int get_Hit(void) const;
	int get_AD(void) const;
};

#endif