/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:45:46 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/20 13:16:13 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
# define HARL_CPP
# include <iostream>
class Harl;
typedef void (Harl::*function)(void);

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		Harl& operator = (Harl& next);
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		std::string	usage[4];
		function arr[4];
};

#endif