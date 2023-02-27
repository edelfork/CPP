/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:19:18 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/05 13:39:28 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int     n;
	int		i;
	Zombie  *horde;

	i = 0;
	std::cout << "How much zombie you see? ";
	std::cin >> n;
	horde = zombieHorde(n, "ZOMBIE");
	while(i < n)
	{
		std::cout << i + 1  << " - ";
		horde[i].call();
		i++;
	}
	delete[] horde;	
	return (0);
}