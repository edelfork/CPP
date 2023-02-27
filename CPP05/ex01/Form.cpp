/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:13:49 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/08 11:32:32 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _grade(0), _gradeExec(0)
{
}

Form::Form(const std::string name, const int grade, const int gradeExec) : _isSigned(false), _name(name), _grade(grade), _gradeExec(gradeExec)
{    
}

Form::~Form()
{}

Form& Form::operator=(const Form& next)
{
    return (*this);
}

const std::string & Form::getName() const
{
    return _name;
}

int Form::getGrade() const
{
    return _grade;
}

int	Form::getGradeExec() const {
	return _gradeExec;
}

bool	Form::getSigned() const {
	return _isSigned;
}

void Form::beSigned(Bureaucrat& Bureaucrat)
{
    if(_isSigned)
        throw AlreadySignedException();
    if(_grade < Bureaucrat.getGrade())
        throw GradeTooLowException();
    _isSigned = true;
}

const char*	Form::GradeTooLowException::what() const throw() {
	return "<Form> grade too low!";
}

const char*	Form::GradeTooHighException::what() const throw() {
	return "<Form> grade too high!";
}

const char*	Form::AlreadySignedException::what() const throw() {
	return "<Form> cannot sign a form twice!";
}

std::ostream&	operator<<(std::ostream &o, const Form& form) {
	o	<< std::boolalpha << "Form " << form.getName() << ", signed: "
		<< form.getSigned() << ", grade to sign " << form.getGrade()
		<< ", grade to execute " << form.getGradeExec() << std::endl;
	return o;
}