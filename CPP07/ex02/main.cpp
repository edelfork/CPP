/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:31:39 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/15 17:18:28 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int			main(void)
{
	unsigned int	i;
	Array<int>		tab(5);
	Array<char>		tab_char(3);
	Array<char>		tab_char2(3);
	Array<float>	tab_float;

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	
	std::cout << BLUE << "--- Test 1 ---" << RESET << std::endl;
	std::cout << "size: " << tab.size() << std::endl;
	for (i = 0; i < tab.size(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab.size() - 1))
			std::cout << tab[i] << ", ";
		else
			std::cout << tab[i] << "]" << std::endl;
	}
	try
	{
		std::cout << tab[5] << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << RED << "Get element from unset cell" << RESET << std::endl;
		std::cerr << e.what() << '\n';
	}
	

	tab_char[0] = 'a';
	tab_char[1] = 'b';
	tab_char[2] = 'c';
	std::cout << std::endl << std::endl;
	std::cout << BLUE << "--- Test 2 tab_char---" << RESET << std::endl;
	std::cout << "size: " << tab_char.size() << std::endl;
	for (i = 0; i < tab_char.size(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab_char.size() - 1))
			std::cout << tab_char[i] << ", ";
		else
			std::cout << tab_char[i] << "]" << std::endl;
	}
	try
	{
		std::cout << tab_char[5] << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << RED << "Get element from unset cell" << RESET << std::endl;
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << std::endl;
	std::cout << BLUE << "--- Test 3 ---" << RESET << std::endl;
	try {
		std::cout << tab_float[0] << std::endl;}
	catch(std::exception const &e) {
		std::cout << RED << "Get element of empty array" << RESET << std::endl;
		std::cerr << e.what() << '\n'; }

	std::cout << std::endl << std::endl;
	std::cout << BLUE << "--- Test 4 ---" << RESET << std::endl;
	std::cout << "assignation (=) tab_char2 = tab_char" << std::endl;
	tab_char2 = tab_char;
	for (i = 0; i < tab_char2.size(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab_char2.size() - 1))
			std::cout << tab_char2[i] << ", ";
		else
			std::cout << tab_char2[i] << "]" << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << BLUE << "--- Test 5 ---" << RESET << std::endl;
	std::cout << "constructor copy tab_char3(tab_char2)" << std::endl;
	Array<char>		tab_char3(tab_char2);
	for (i = 0; i < tab_char3.size(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab_char3.size() - 1))
			std::cout << tab_char3[i] << ", ";
		else
			std::cout << tab_char3[i] << "]" << std::endl;
	}
	return 0;
}


// int	main()
// {
// 	Array<int>			intArray;
// 	Array<std::string>	stringArray(10);
// 	Array<std::string>	anotherStringArray;

// 	stringArray[0] = "Hi";
// 	stringArray[1] = "Hello";
// 	stringArray[2] = "How are you?";
// 	stringArray[3] = "Fine and you?";
// 	stringArray[4] = "Doing great thanks!";
// 	stringArray[5] = "You're very welcome";
// 	std::cout << "intArray.size() = " << intArray.size() << std::endl;
// 	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
// 	anotherStringArray = stringArray;
// 	anotherStringArray[3] = "I'm good, how about you?";

// 	try
// 	{
// 		std::cout << stringArray[59] << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		std::cout << stringArray[-3] << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	return 0;
// }