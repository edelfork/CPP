/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:45:43 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/20 13:55:49 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	usage[0] = "DEBUG";
	usage[1] = "INFO";
	usage[2] = "WARNING";
	usage[3] = "ERROR";

	arr[0] = &Harl::debug;
	arr[1] = &Harl::info;
	arr[2] = &Harl::warning;
	arr[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string str)
{
	int i;
	int b;

	b = 0;
	for(i = 0; i < 4; i++)
	{
		if(!usage[i].compare(str))
		{
			b = 1;
			while (i < 4)
			{
				(this->*arr[i])();
				i++;
			}

		}
	}
	if (!b)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}