/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:45:21 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/20 13:51:43 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl    harl;
	if (argc != 2)
	{
		std::cout << "Wrong input, use 2 parameters (HINT: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (0);
	}	
	harl.complain(argv[1]);
	return(0);
}