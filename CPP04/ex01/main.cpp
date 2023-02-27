/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:28:42 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/02 17:22:17 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal  *array[10];
	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for(int i = 0; i < 10; i++)
		delete array[i];
	return 0;
}
