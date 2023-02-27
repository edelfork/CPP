/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:00:53 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/04 17:20:54 by gimartin         ###   ########.fr       */
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
	return (0);
}