/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:25:00 by gimartin          #+#    #+#             */
/*   Updated: 2022/07/06 17:48:04 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie giorgio("Giorgio");
    Zombie *other;

    other = newZombie("New");
    randomChump("AAA");
    giorgio.call();
    other->call();
    delete other;
    return (0);
}