/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:28:42 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/02 14:16:15 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* Wrong1 = new WrongCat();
std::cout << Wrong1->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
Wrong1->makeSound();
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete(Wrong1);
delete(meta);
delete(j);
delete(i);
return 0;
}