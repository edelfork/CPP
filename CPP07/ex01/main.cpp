/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:46:30 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/15 15:09:41 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T> void iter(T* array, int arrayLen, void(*function)(const T&))
{
	for (int i = 0; i < arrayLen; i++)
		function(array[i]);
}

template<typename T> void text(T& array)
{
	std::cout << GREEN << "Part of the message: " << RED << array << RESET << std::endl;
}

void randNum(int& num)
{
	num = std::rand() % 100;
}

int main()
{
	std::string array[3];
	int         num[5];

	array[0] = "fisrt";
	array[1] = "second";
	array[2] = "third";
	::iter(array, 3, &text);
	for (int i = 0; i < 5; i++)
		randNum(num[i]);
	::iter(num, 5, &text);
}