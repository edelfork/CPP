/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:53 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/08 11:09:52 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat first("Primo", 1);
		std::cout << first;
	}
	catch (std::exception& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	try{
		Bureaucrat second("Over", -1);
		std::cout << second;
	}
	catch (std::exception& e){
		std::cout << "Over construtcion(grade -1) Error: " << e.what() << std::endl;
	}
	try{
		Bureaucrat third("Under", 151);
		std::cout << third;
	}
	catch (std::exception& e){
		std::cout << "Under construction(grade 151) Error: " << e.what() << std::endl;
	}
	try{
		Bureaucrat upper("Increment yes", 10);
		std::cout << upper;
		upper.incrementGrade();
	}
	catch (std::exception& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	try{
		Bureaucrat upper("Increment no", 1);
		std::cout << upper;
		upper.incrementGrade();
	}
	catch (std::exception& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	try{
		Bureaucrat upper("Decrement yes", 10);
		std::cout << upper;
		upper.decrementGrade();
	}
	catch (std::exception& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	try{
		Bureaucrat upper("Decrement no", 150);
		std::cout << upper;
		upper.decrementGrade();
	}
	catch (std::exception& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	try{
		Bureaucrat bur1("Bur_1", 11);
		Form form1("Form_1", 12, 1);
		std::cout << bur1 << std::endl;
		std::cout << form1 << std::endl;
		bur1.signForm(form1);
		form1.beSigned(bur1);
	}
	catch (std::exception& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	try{
		Bureaucrat bur2("Bur_2", 13);
		Form form2("Form_2", 12, 1);
		std::cout << bur2 << std::endl;
		std::cout << form2 << std::endl;
		bur2.signForm(form2);
		form2.beSigned(bur2);
	}
	catch (std::exception& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}