/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:51:55 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/18 11:41:17 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << GREEN << "SUBJECT TEST" << std::endl;
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

Span sp2 = Span(10);
 sp2.addNumberExpert(1, 10);
std::cout << RED << "Expert TEST (1 to 10)" << std::endl;
std::cout << sp2.shortestSpan() << std::endl;
std::cout << sp2.longestSpan() << RESET << std::endl;
std::cout << "TEST OUTofBOUND" << std::endl;
try
{
   sp.addNumber(1);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
return 0;
}