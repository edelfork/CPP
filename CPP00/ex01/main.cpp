/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:17:32 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/03 18:30:31 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void rules()
{
	std::cout << std::endl;
	std::cout << "Use ADD for insert a new contact;" << std::endl;
	std::cout << "Use SEARCH for display the phoneBook;" << std::endl;
	std::cout << "Use EXIT for terminate the program." << std::endl;
	std::cout << std::endl;
	std::cout << "No other instructions are allowed!" << std::endl;
}

int main()
{
	std::string	cmd;
	PhoneBook	phone;

	std::cout << "Welcome to my pPhoneBook these are the rules" << std::endl;
	rules();
	while (cmd.compare("EXIT\0"))
	{
		std::cout << "what do you want to do? ";
		std::getline(std::cin, cmd);
		if(!cmd.compare("ADD\0"))
			phone.add_contact();
		else if (!cmd.compare("SEARCH\0"))
			phone.display();
		else if (cmd.length() && cmd.compare("EXIT\0"))
		{
			std::cout << "I MEAN..." << std::endl;
			rules();
		}
	}
	return (0);
}