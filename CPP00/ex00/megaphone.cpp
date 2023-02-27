/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:05:17 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/02 17:15:13 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	allcaps(char *argv)
{
	int i;

	i = 0;
	while(argv[i])
	{
		if (argv[i] >= 97 && argv[i] <=122)
			argv[i] -= 32;
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i;

		i = 1;
		while (argv[i])
		{
			allcaps(argv[i]);
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}