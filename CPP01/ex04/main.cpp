// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/07/06 17:06:18 by gimartin          #+#    #+#             */
// /*   Updated: 2022/07/06 17:29:41 by gimartin         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::ofstream	output;
	std::ifstream	file;
	std::string		to_rep;
	std::string		str;
	std::string		name;
	std::string		new_string;
	size_t			i = 0;
	size_t			j = 0;
	char			c;

	if (argc != 4 || (argv[1] && argv[2] && !argv[2][0] && argv[3]))
	{
		std::cout << "Error: wrong arguments. Use ./sed_is_for_losers <fileName> <stringReplaced> <stringToReplace>" << std::endl;
		return (1);
	}
	name.append(argv[1]);
	file.open(name);
	new_string.append(argv[2]);
	to_rep.append(argv[3]);
	if (!file)
	{
		std::cout << "Error: no such file or directory" << std::endl;
		return (1);
	}
	output.open(name + ".replace");
	while (file.good())
	{
		c = file.get();
		if (c == -1)
			break ;
		str.push_back(c);
	}
	str += '\0';
	while (str[0] && str[j])
	{
		j = str.find(new_string);
		if (j == std::string::npos)
			j = str.length();
		while (i < j)
		{
			if (str[i] != 0)
				output << str[i++];
			else
				break ;
		}
		if (j == str.length())
			break ;
		output << to_rep;
		str = str.substr(j + new_string.length());
		j = 0;
		i = 0;
	}
	output.close();
	file.close();
}