/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:38:10 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/10 14:57:16 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <iostream>

class Intern;

typedef Form* (Intern::*cf)(const std::string&) const;

class Intern
{
	private:
		static const std::string	name[3];
		static const cf				type[3];
		Form*	ShrubberyCreation(const std::string& target) const;
		Form*	RobotomyRequest(const std::string& target) const;
		Form*	PresidentialPardon(const std::string& target) const;
	public:
		Intern();
		~Intern();
		Intern& operator=(const Intern& next);
		Form* makeForm(const std::string& form, const std::string& target) const;

		class FormNotFoundException: public std::exception
		{
			virtual const char* what() const throw();
		};
};
#endif