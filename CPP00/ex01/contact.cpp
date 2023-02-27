/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:17:30 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/02 18:36:30 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	int	i;

	i = FirstName;
	while(i < DarkestSecret)
		this->info[i++] = std::string();
}

Contact:: ~Contact()
{}

std::string	Contact::field_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

void	Contact::insert_info(void)
{
	int	i;
	
	i = FirstName;
	while (i <=DarkestSecret)
	{
		std::cout << "\t# " << Contact::field_name[i] << ": ";
		std::getline(std::cin, this->info[i]);
		if (this->info[i].length() == 0)
			this->info[i] = "unknown";
		i++;
	}
	std::cout << "Contact added in phonebook.\n";
	return ;
}

std::string	Contact::get_portions(int i)
{
	std::string port;

	if (this->info[i].length() > 10)
	{
		port = this->info[i].substr(0, 9);
		port += ".";
	}
	else
	{
		port = this->info[i];
		while (port.length() < 10)
			port += " ";
	}
	return (port);
}