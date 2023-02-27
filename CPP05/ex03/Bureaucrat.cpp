/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:01:05 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/10 15:00:05 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150)
{
	std::cout<< BOLDGREEN << "Default constructor called." << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if(grade > min)
		throw GradeTooLowException();
	else if(grade < max)
		throw GradeTooHighException();
	std::cout << BOLDGREEN << this->getName() << " with grade: "<< this->getGrade() << " constructor called." << RESET << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << BOLDRED << "Destructor called." << RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& next)
{
	return (*this);
}

std::string const Bureaucrat::getName()
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade(int change)
{
	if (_grade - change < max)
		throw GradeTooHighException();
	_grade -=change;
	std::cout << YELLOW << "Now the grade is: " << _grade << RESET << std::endl;
}

void Bureaucrat::decrementGrade(int change)
{
	if (_grade + change > min)
		throw GradeTooLowException();
	_grade +=change;
	std::cout << YELLOW << "Now the grade is: " << _grade << RESET << std::endl;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
		}
	catch(const std::exception& e)
	{
		std::cout << _name << "  could't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

void	Bureaucrat::executeForm(Form& form) const {
	try {
		form.executeForm(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout	<< _name << " cannot execute " << form.getName() << " because "
					<< e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat& bureaucrat) {
	o	<< bureaucrat.getName() << ", bureaucrat of grade "
		<< bureaucrat.getGrade() << std::endl;
	return o;
}