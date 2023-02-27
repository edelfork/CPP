/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:32:33 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/12 11:43:15 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	toInt(double n, std::string s)
{
	if (n > 2147483647  || n < -2147483648 || ft_control(s))
		std::cout << BLUE << "int: impossible" << RESET << std::endl;
	else
		std::cout <<BLUE << "int: " << static_cast<int>(n) << RESET << std::endl;
}

void	toChar(double n, std::string s)
{
	if (n < 0 || n > 127 || ft_control(s))
		std::cout << YELLOW << "char: impossible" << RESET << std::endl;
	else if (n > 32 && n < 127)
		std::cout << YELLOW << "char: '" << static_cast<char>(n) << "'" << RESET << std::endl;
	else
		std::cout << YELLOW << "char: Non displayable" << RESET << std::endl;
	toInt(n, s);
}

bool ft_control(std::string s)
{
	if (s == "nan" || s == "+nan" || s == "-nan" || s == "nanf" || s == "+nanf" || s == "-nanf" ||
		s == "inf" || s == "+inf" || s == "-inf" || s == "inff" || s == "+inff" || s == "-inff")
		return 1;
	return 0;
}

bool check(std::string s)
{
	int j = s.length();
	int dot =  0;
	if ((s[0] >= '0' && s[0] <= '9') || ((s[0] == '-'  ||  s[0] == '+') && isdigit(s[1])))
	
	{
		for (int i = 1; i < j; i++)
		{
			if (s[i] == '.')
				dot++;
			if (i == j - 1 && s[i] == 'f' && dot == 1 && s[i - 1] != '.')
				return (true);
			if (dot > 1 || isalpha(s[i]) || s[s.length() - 1] == '.')
				return (false);
		}
		
	}
	else
		return(ft_control(s));
	return (true);
}

int main(int argc, char ** argv)
{
	std::string	str;
	double n;	

	if(argc != 2)
	{
		std::cout << BOLDRED << "Error: Usage." << RESET << std::endl;
		return (1);
	}
	str = argv[1];
	if(!check(str))
	{
		std::cout << BOLDRED << "Error: Wrong arguments." <<RESET << std::endl;
		return (1);
	}
	std::cout << BOLDGREEN << "The number to cast is: " << argv[1] << RESET << std::endl << std::endl;
	n = (!isdigit(str[0]) && str.length() == 1) ? static_cast<int>(str[0]) : atof(argv[1]);
	toChar(n, str);
	std::cout << MAGENTA << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(n) << "f" << RESET << std::endl;
	std::cout << RED << "double: " << static_cast<double>(n) << RESET << std::endl;
	return 0;
	
}