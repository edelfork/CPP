/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 09:23:51 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/04 12:02:55 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & ref);
		~Cure(void);
		Cure &operator=(Cure const & next);
		std::string const & getType() const;
		Cure *clone() const;
		void use(ICharacter& target);
	private:
		std::string _type;
};

#endif