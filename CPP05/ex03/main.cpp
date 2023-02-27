/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:53 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/10 14:49:20 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

void	sectionTitle(const std::string& title) {
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

Bureaucrat	bur1("bur1", 42);
Intern		interno;

void	testMake(const std::string& formName, const std::string& target) {
	sectionTitle(formName);

	Form* form = interno.makeForm(formName, target);

	std::cout << *form;
	bur1.signForm(*form);
	bur1.executeForm(*form);

	delete form;
}

int	main() {
	try {
		testMake("robotomy request", "Bender");
		testMake("presidential pardon", "gimartin");
		testMake("shrubbery creation", "home");
		testMake("not a form", "you");
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}