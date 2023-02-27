/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:48:15 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/15 17:19:32 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

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

template<typename T>
class Array
{
	public:

		Array<T>(): _size(0), _array(NULL)
		{
			std::cout << BOLDGREEN << "Empty constructor called" << RESET << std::endl;
		}
		Array<T>( const unsigned int n ): _size(n)
		{
			std::cout << BOLDGREEN << "Size constructor called" << RESET << std::endl;
			if (n < 0)
				throw std::overflow_error("Index out of bounds");
			this->_array = new T[n];
		}
		Array<T>( const Array<T> &array )
		{
			std::cout << BOLDGREEN << "Copy constructor called" << RESET << std::endl;
			*this = array;
		}
		~Array<T>()
		{
			std::cout << BOLDRED << "Destructor called" << RESET << std::endl;
			if (this->_size > 0)
				delete [] this->_array;
		}

		Array<T>	&operator=( const Array<T> &next )
		{
			std::cout << "Assignation overload called" << std::endl;
			if (this == &next)
				return *this;
			if (this->_size > 0)
				delete [] this->_array;
			this->_size = next.size();
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = next[i];
			return *this;
		}
		T			&operator[](const int index) const
		{
			if (index >= this->_size || index < 0)
				throw std::overflow_error("Index out of bounds");
			return this->_array[index];
		}

		int			size() const
		{
			return this->_size;
		}

	private:

		int		_size;
		T		*_array;

};

template<typename T>
std::ostream	&operator<<( std::ostream &ostr, const Array<T> &instance );

#endif