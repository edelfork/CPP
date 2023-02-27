/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:20:51 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/10 15:04:31 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& next)
{
	return *this;
}

void RobotomyRequestForm::execute() const
{
	std::cout << "DRIIIIN DRIIIN! SQUILLO DI " << _target << std::endl;
	srand(time(NULL));
	if(rand() % 2)
		std::cout << MAGENTA << _target << " has been robotomized! :)" << RESET << std::endl;
	else
		std::cout << MAGENTA << _target << " robotomized failed... :(" << RESET << std::endl;	
}