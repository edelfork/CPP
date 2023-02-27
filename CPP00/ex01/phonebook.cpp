/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:17:24 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/05 09:43:16 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->older = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::add_contact(void)
{
	contacts[this->older].insert_info();
	this->older = (this->older + 1) % 8;
}

void	PhoneBook::display(void)
{
	int			i;
	int			j;
	std::string	to_search;
	Contact		tmp;

	i = 0;
	std::cout << "Who want to search? ";
	std::getline(std::cin, to_search);
	if (to_search.length() < 10)
	{
		int len;

		len = to_search.length();
		while (len < 10)
		{
			to_search += " ";
			len++;
		}
	}
	else if (to_search.length() > 10)
	{
		to_search = to_search.substr(0,9);
		to_search += ".";
	}
	while (j < 5)
	{
		if (!to_search.compare(contacts[i].get_portions(j)))
		{
			std::cout << "FirstName  | LastName   | NickName   | PhoneNBR   |" << std::endl;
			break ;
		}
		j++;
	}
	if (j == 5)
		std::cout << "This field don't exist!" << std::endl;
	while (i < 8)
	{
		j = 0;
		while (j < 5)
		{
			if (!to_search.compare(contacts[i].get_portions(j)))
			{
				j = 0;
				while(j < 4)
					std::cout << contacts[i].get_portions(j++) << " | ";
				std::cout << std::endl;
			}
			j++;
		}
		j = 0;
		i++;
	}
}