/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:22:00 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/18 10:32:43 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void print(std::vector<int> cont, int n)
{
	if (easyfind(cont, n))
		std::cout << GREEN << n << " Element found" << RESET << std::endl;
	else
		std::cout << RED << "ZERO OCCURENCE OF: "<< n << RESET << std::endl;
}

int main()
{
	std::vector<int> cont;
	int i = 0;

	cont.push_back(3);
	cont.push_back(5);
	cont.push_back(12);
	cont.push_back(5);
	cont.push_back(-1);
	while (i < 5)
	{
		std::cout << YELLOW << "container[" << i << "] : " << cont[i] << std::endl;
		i++;
	}
	std::cout << RESET;
	print(cont, 5);
	print(cont, -5);
	print(cont, 12);
	print(cont, 3);
	print(cont, -1);
	print(cont, 0);
	return (0);
}