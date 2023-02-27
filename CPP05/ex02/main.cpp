/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:53 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/10 14:48:00 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	sectionTitle(const std::string& title) {
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

void	testForm(Bureaucrat& bureaucrat, Form& form) {
	std::cout << form;
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
}

int	main() {
	Bureaucrat	bur1("bur1", 1);
	Bureaucrat	bur2("bur2", 42);
	std::cout << bur1 << bur2;

	try {
		{
			sectionTitle("shrubbery creation");
			ShrubberyCreationForm form("home");
			testForm(bur1, form);
		}
		{
			sectionTitle("robotomy request");
			RobotomyRequestForm form("Bender");
			testForm(bur1, form);
		}
		{
			sectionTitle("presidential pardon");
			PresidentialPardonForm form("gimartin");
			testForm(bur1, form);
		}
		PresidentialPardonForm form("gimartin");
		{
			sectionTitle("execute unsigned form");
			std::cout << form;
			bur1.executeForm(form);
		}
		{
			sectionTitle("too low to execute");
			bur1.signForm(form);
			bur2.executeForm(form);
		}
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
