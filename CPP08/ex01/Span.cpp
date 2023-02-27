/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:21:26 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/18 11:38:50 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span &Span::operator=(Span const & next)
{
	this->_n = next._n;
	return (*this);
}

std::list<int> Span::getList() const
{
	return (this->_l);
}

unsigned int Span::getSize() const
{
	return (this->_n);
}

unsigned int Span::shortestSpan()
{
	if (getList().size() <= 2)
		throw EmptySTLException();
	long min = LONG_MAX;
	std::list<int>::iterator it = this->_l.begin();
	for (unsigned int i = 0; i < this->_l.size(); i++)
	{
		std::list<int>::iterator tmp = it;
		int tmp_el = *it;
		tmp++;
		for (unsigned int j = i + 1; j < this->_l.size(); j++)
		{
			if (abs(tmp_el - *tmp) < min)
				min = abs(tmp_el - *tmp);
			tmp++;
		}
		it++;
	}
	return (min);
}

unsigned int Span::longestSpan()
{
	if (getList().size() <= 2)
		throw EmptySTLException();
	int min = *std::min_element(this->_l.begin(), this->_l.end());
	int max = *std::max_element(this->_l.begin(), this->_l.end());
	return (max - min);
}

void Span::addNumber(int N)
{
	if (getList().size() >= getSize())
		throw OutofBoundException();
	this->_l.push_back(N);
}

void	Span::addNumberExpert(int N, int N2)
{
	try
	{
		for (int i = N; i <= N2; i++)
		{
			this->addNumber(i);
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}