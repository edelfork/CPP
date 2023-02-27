/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:44:15 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/12 12:08:53 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data*       data1 = new Data();
	uintptr_t   ptr = serialize(data1);
	Data*		data2 = deserialize(ptr);
	std::cout << std::endl << BOLDBLUE << "Elem\tPointer\t\tCreate by" << std::endl;
	std::cout << YELLOW << "data1:\t" << data1 << "\t(new Data())" << std::endl;
	std::cout << MAGENTA << "ptr:\t" << ptr << "\t(serialize of data1)" << std::endl;
	std::cout << YELLOW << "data2:\t" << data2 << "\t(deserialize of ptr)" << std::endl << std::endl;
	delete data1;
	std::cout << std::endl;
	return (0);
}