/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:28:42 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/02 16:09:52 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog* j = new Dog();
	Cat* i = new Cat();
	const WrongAnimal* Wrong1 = new WrongCat();
	std::cout << Wrong1->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	Wrong1->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete(Wrong1);
	delete(i);
	delete(j);
	Animal  *array[10];
	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for(int j = 0; j < 10; j++)
		delete array[j];
	return 0;
}