/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:17:34 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/03 19:16:26 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
		public:
				Contact(void);
				virtual ~Contact(void);
				Contact(Contact& next);
				Contact& operator=(Contact& next);
				void			insert_info(void);
				std::string		get_portions(int i);
		private:
				static std::string		field_name[5];
				std::string				info[5];
				enum
				{
					FirstName,
					LastName,
					NickName,
					PhoneNumber,
					DarkestSecret
				};
};

#endif