/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:20:57 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/18 11:38:55 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <list>
# include <iterator>
# include <exception>
# include <limits>
# include <algorithm>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

class Span
{
	private:
		unsigned int	_n;
		std::list<int>	_l;
	public:
		Span(void): _n(0) {}
		Span(unsigned int N): _n(N) {}
		~Span(void) {}
		Span& operator=(Span const &next);

		std::list<int>	getList() const;
		unsigned int	getSize() const;
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			addNumber(int N);
		void			addNumberExpert(int N, int N2);

		class OutofBoundException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("Out of bound!");
				}
		};
		
		class EmptySTLException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("Too few arguments");
				}
		};
};

std::ostream &	operator<<( std::ostream & ostr, Span const & instance);

#endif