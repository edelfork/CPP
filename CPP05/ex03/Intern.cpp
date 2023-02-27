/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:34:00 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/10 14:56:56 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
const std::string	Intern::name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
const cf			Intern::type[3] = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};

Intern::Intern() {}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& next)
{
    return *this;
}

Form*	Intern::ShrubberyCreation(const std::string& target) const
{
    return new ShrubberyCreationForm(target);
}
Form*	Intern::RobotomyRequest(const std::string& target) const
{
    return new RobotomyRequestForm(target);
}
Form*	Intern::PresidentialPardon(const std::string& target) const
{
    return new PresidentialPardonForm(target);
}
	

Form* Intern::makeForm(const std::string& form, const std::string& target) const
{
    for(int i = 0; i < 3; i++)
        if (name[i] == form)
            return (this->*(type[i]))(target);
    throw FormNotFoundException();
}

const char* Intern::FormNotFoundException::what() const throw()
{
    return "<Intern> not found!";
}