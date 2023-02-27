/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <gimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:24:15 by gimartin          #+#    #+#             */
/*   Updated: 2022/08/04 12:54:19 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & ref);
		~MateriaSource(void);
		MateriaSource & operator=(MateriaSource const & next);
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const & type);
	private:
		AMateria *(_inventory[4]);
};
#endif