/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:30:44 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/02 15:01:18 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << BOLDGREEN << "Brain created."<< RESET << std::endl;
}

Brain::~Brain()
{
	std::cout << BOLDRED << "Brain destroyed."<< RESET << std::endl;
}

Brain	&Brain::operator=(Brain &next)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = next._ideas[i];
	return (*this);
}

