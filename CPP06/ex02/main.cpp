/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:14:53 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/12 12:34:35 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    Base *a;
    Base *b;
    Base *c;

    // std::srand((unsigned int)std::time(NULL));
    a = generate();
    identify(a);
    identify(*a);
    sleep(1);
    std::cout << std::endl;
    b = generate();
    identify(b);
    identify(*b);
    sleep(1);
    std::cout << std::endl;
    c = generate();
    identify(c);
    identify(*c);
    std::cout << std::endl;
    delete(a);
    delete(b);
    delete(c);
    return (0);
}