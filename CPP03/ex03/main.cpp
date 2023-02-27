/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:05:47 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/29 17:48:43 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap vaiana = DiamondTrap("Vaiana");
	std::cout << std::endl;
	vaiana.whoAmI();
	std::cout << std::endl;
	return (0);
}