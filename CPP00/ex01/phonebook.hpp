/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:17:37 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/03 18:47:17 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"
#include <iostream>

class PhoneBook
{
	public:
			PhoneBook(void);
			virtual ~PhoneBook(void);
			PhoneBook(PhoneBook& next);
			PhoneBook& operator=(PhoneBook& next);
			void	add_contact(void);
			void	display(void);
	private:
			Contact	contacts[8];
			int		older;
};

#endif